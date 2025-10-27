// Class representing Bank
public class Bank {
    private String code;
    private String address;

    public Bank(String code, String address) {
        this.code = code;
        this.address = address;
    }

    public void manages() {
        // logic for managing the bank
    }

    public void maintains() {
        // logic for maintaining the bank
    }
}

// Class representing Customer
public class Customer {
    private String name;
    private String address;
    private String dob;
    private String uid;

    public Customer(String name, String address, String dob, String uid) {
        this.name = name;
        this.address = address;
        this.dob = dob;
        this.uid = uid;
    }

    public void owns(Account account) {
        // logic for customer owning an account
    }
}

// Class representing Debit Card
public class DebitCard {
    private String cardId;
    private Customer ownedBy;

    public DebitCard(String cardId, Customer ownedBy) {
        this.cardId = cardId;
        this.ownedBy = ownedBy;
    }

    public void accessTo(Account account) {
        // logic for accessing the account via debit card
    }
}

// Class representing Account
public class Account {
    private String type;
    private Customer owner;

    public Account(String type, Customer owner) {
        this.type = type;
        this.owner = owner;
    }

    public void checkBalance() {
        // logic to check balance
    }
}

// Class for Savings Account, inherits from Account
public class SavingsAccount extends Account {
    private String accountId;

    public SavingsAccount(String accountId, Customer owner) {
        super("Savings", owner);
        this.accountId = accountId;
    }

    public void debit(double amount) {
        // logic for debiting an amount
    }

    public void credit(double amount) {
        // logic for crediting an amount
    }
}

// Class for Current Account, inherits from Account
public class CurrentAccount extends Account {
    private String accountId;

    public CurrentAccount(String accountId, Customer owner) {
        super("Current", owner);
        this.accountId = accountId;
    }

    public void debit(double amount) {
        // logic for debiting an amount
    }

    public void credit(double amount) {
        // logic for crediting an amount
    }
}

// Class representing ATM
public class ATM {
    private String location;
    private String managedBy;

    public ATM(String location, String managedBy) {
        this.location = location;
        this.managedBy = managedBy;
    }

    public void transactions() {
        // logic for handling ATM transactions
    }

    public void identifies() {
        // logic for identifying a customer via ATM
    }
}

// Class representing ATM Transactions
public class ATMTransactions {
    private String transactionId;
    private String date;
    private String type;

    public ATMTransactions(String transactionId, String date, String type) {
        this.transactionId = transactionId;
        this.date = date;
        this.type = type;
    }

    public void update() {
        // logic for updating the transaction
    }
}

// Class representing Withdrawal
public class Withdrawal {
    private double amount;

    public Withdrawal(double amount) {
        this.amount = amount;
    }

    public void withdraw() {
        // logic for withdrawing money
    }
}

// Class representing Transfer
public class Transfer {
    private double amount;
    private String accountId;

    public Transfer(double amount, String accountId) {
        this.amount = amount;
        this.accountId = accountId;
    }

    public void transfer() {
        // logic for transferring money
    }
}

// Class for Pin Generation
public class PinGeneration {
    private String accountType;

    public PinGeneration(String accountType) {
        this.accountType = accountType;
    }

    public void generatePin() {
        // logic for generating PIN
    }
}
////////
mport java.util.Date;

// Enum for AccountStatus
enum AccountStatus {
    ACTIVE,
    INACTIVE,
    SUSPENDED,
    CLOSED
}

// Enum for AccountType
enum AccountType {
    GUEST,
    RECEPTIONIST
}

// Enum for RoomStyle
enum RoomStyle {
    SINGLE,
    DOUBLE,
    SUITE
}

// Enum for RoomStatus
enum RoomStatus {
    AVAILABLE,
    RESERVED,
    OCCUPIED
}

// Enum for BookingStatus
enum BookingStatus {
    PENDING,
    CONFIRMED,
    CANCELLED
}

// Class representing Account
class Account {
    private int id;
    private String password;
    private AccountStatus status;

    public Account(int id, String password, AccountStatus status) {
        this.id = id;
        this.password = password;
        this.status = status;
    }

    public void resetPassword(String newPassword) {
        this.password = newPassword;
    }
}

// Abstract class for Person
abstract class Person {
    private String name;
    private String address;
    private String email;
    private String phone;
    private AccountType accountType;

    public Person(String name, String address, String email, String phone, AccountType accountType) {
        this.name = name;
        this.address = address;
        this.email = email;
        this.phone = phone;
        this.accountType = accountType;
    }
}

// Class representing Guest (inherits from Person)
class Guest extends Person {
    private int totalRoomsBooked;

    public Guest(String name, String address, String email, String phone, AccountType accountType, int totalRoomsBooked) {
        super(name, address, email, phone, accountType);
        this.totalRoomsBooked = totalRoomsBooked;
    }

    public void createBooking(RoomBooking booking) {
        // Logic for creating room booking
    }
}

// Class representing Receptionist (inherits from Person)
class Receptionist extends Person {

    public Receptionist(String name, String address, String email, String phone, AccountType accountType) {
        super(name, address, email, phone, accountType);
    }

    public void createBooking(RoomBooking booking) {
        // Logic for creating room booking
    }
}

// Class representing Hotel
class Hotel {
    private String name;
    private String location;

    public Hotel(String name, String location) {
        this.name = name;
        this.location = location;
    }

    public Room[] getRooms() {
        // Logic for getting available rooms
        return null;
    }
}

// Class representing Room
class Room {
    private String roomNumber;
    private RoomStyle style;
    private RoomStatus status;
    private double bookingPrice;

    public Room(String roomNumber, RoomStyle style, RoomStatus status, double bookingPrice) {
        this.roomNumber = roomNumber;
        this.style = style;
        this.status = status;
        this.bookingPrice = bookingPrice;
    }

    public boolean isRoomAvailable() {
        return this.status == RoomStatus.AVAILABLE;
    }
}

// Class representing RoomBooking
class RoomBooking {
    private String reservationNumber;
    private Date startDate;
    private int durationDays;
    private BookingStatus status;
    private Date endTime;

    public RoomBooking(String reservationNumber, Date startDate, int durationDays, BookingStatus status, Date endTime) {
        this.reservationNumber = reservationNumber;
        this.startDate = startDate;
        this.durationDays = durationDays;
        this.status = status;
        this.endTime = endTime;
    }

    public void fetchDetail() {
        // Logic for fetching booking details
    }
}

// Class representing Notification
class Notification {
    private int notificationId;
    private Date createdOn;
    private String content;

    public Notification(int notificationId, Date createdOn, String content) {
        this.notificationId = notificationId;
        this.createdOn = createdOn;
        this.content = content;
    }

    public void send() {
        // Logic for sending notifications
    }
}
/////////////////////////
import java.util.ArrayList;
import java.util.Date;
import java.util.List;

// Class representing Catalog
class Catalog {
    private String authorName;
    private int noOfCopies;

    public Catalog(String authorName, int noOfCopies) {
        this.authorName = authorName;
        this.noOfCopies = noOfCopies;
    }

    public void updateInfo(String authorName, int noOfCopies) {
        this.authorName = authorName;
        this.noOfCopies = noOfCopies;
    }

    public void searching(String bookTitle) {
        // Logic for searching a book in the catalog
    }
}

// Abstract class representing Books
abstract class Books {
    protected String authorName;
    protected String bookTitle;
    protected int noOfBooks;

    public Books(String authorName, String bookTitle, int noOfBooks) {
        this.authorName = authorName;
        this.bookTitle = bookTitle;
        this.noOfBooks = noOfBooks;
    }

    public abstract void removeFromCatalog();

    public void addToCatalog() {
        // Logic to add a book to the catalog
    }
}

// Class representing ReferenceBook (inherits from Books)
class ReferenceBook extends Books {

    public ReferenceBook(String authorName, String bookTitle, int noOfBooks) {
        super(authorName, bookTitle, noOfBooks);
    }

    @Override
    public void removeFromCatalog() {
        // Logic to remove reference book from catalog
    }

    public void search() {
        // Logic to search for a reference book
    }
}

// Class representing GeneralBook (inherits from Books)
class GeneralBook extends Books {

    public GeneralBook(String authorName, String bookTitle, int noOfBooks) {
        super(authorName, bookTitle, noOfBooks);
    }

    @Override
    public void removeFromCatalog() {
        // Logic to remove general book from catalog
    }
}

// Class representing Librarian
class Librarian {
    private String name;
    private String address;
    private int mobileNo;

    public Librarian(String name, String address, int mobileNo) {
        this.name = name;
        this.address = address;
        this.mobileNo = mobileNo;
    }

    public void updateInfo(String name, String address, int mobileNo) {
        this.name = name;
        this.address = address;
        this.mobileNo = mobileNo;
    }

    public void issueBook(Member member, Books book) {
        // Logic for issuing a book to a member
    }

    public void searchBook(Catalog catalog) {
        // Logic for searching a book in the catalog
    }

    public void returnBook(Member member, Books book) {
        // Logic for returning a book
    }
}

// Class representing Alert
class Alert {
    private Date issueDate;
    private String bookName;
    private Date returnDate;
    private double fine;

    public Alert(Date issueDate, String bookName, Date returnDate, double fine) {
        this.issueDate = issueDate;
        this.bookName = bookName;
        this.returnDate = returnDate;
        this.fine = fine;
    }

    public void sendToLibrarian() {
        // Logic to send alert to the librarian
    }

    public void deleteAlertByNo(int alertNo) {
        // Logic to delete an alert by number
    }

    public void fineCalculation() {
        // Logic to calculate fine
    }
}

// Abstract class representing Member
abstract class Member {
    protected String name;
    protected String address;
    protected int mobileNo;

    public Member(String name, String address, int mobileNo) {
        this.name = name;
        this.address = address;
        this.mobileNo = mobileNo;
    }

    public void requestBook(Librarian librarian, Books book) {
        // Logic for requesting a book from the librarian
    }

    public void returnBook(Librarian librarian, Books book) {
        // Logic for returning a book to the librarian
    }
}

// Class representing FacultyMember (inherits from Member)
class FacultyMember extends Member {
    private String facultyID;

    public FacultyMember(String name, String address, int mobileNo, String facultyID) {
        super(name, address, mobileNo);
        this.facultyID = facultyID;
    }

    public void checkoutBook(Librarian librarian, Books book) {
        // Logic for faculty member to check out a book
    }
}

// Class representing Student (inherits from Member)
class Student extends Member {
    private String studentID;

    public Student(String name, String address, int mobileNo, String studentID) {
        super(name, address, mobileNo);
        this.studentID = studentID;
    }

    public void checkoutBook(Librarian librarian, Books book) {
        // Logic for student to check out a book
    }

    public void returnBook(Librarian librarian, Books book) {
        // Logic for student to return a book
    }
}

public class LibrarySystem {
    public static void main(String[] args) {
        // Example of how the classes could be used

        // Creating a Catalog
        Catalog catalog = new Catalog("Author A", 5);
        
        // Creating books
        GeneralBook book1 = new GeneralBook("Author A", "General Book A", 3);
        ReferenceBook book2 = new ReferenceBook("Author B", "Reference Book B", 1);
        
        // Creating Librarian
        Librarian librarian = new Librarian("Librarian X", "123 Main St", 1234567890);

        // Creating members
        FacultyMember faculty = new FacultyMember("Prof. Y", "456 University St", 987654321, "FAC123");
        Student student = new Student("Student Z", "789 College St", 123123123, "STU456");

        // Faculty checking out a book
        faculty.checkoutBook(librarian, book1);
        
        // Student returning a book
        student.returnBook(librarian, book2);
    }
}
////////////////////////////