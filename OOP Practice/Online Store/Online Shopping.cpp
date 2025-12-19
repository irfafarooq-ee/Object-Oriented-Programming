//Online Store.
#include <iostream>

class Online_Store {
	class Product {
		std::string Name, Price, Bar_code, category, quantity, status;

		//Behaviours
		/*1. Product Information
		2. Update Product Information
		3. Check Stats
		4. Search by category
		5. Product display
		6. Create Product
		7. Delete Product
		*/
	};
	class Customer {
		std::string Name, code, Contact_no, address, Credit_card;

		/*Behaviours
		1. Order placement
		2. Review Order
		3. Order tracking
		4. Review
		5. Vouchers
		6. Payment Method
		7. Order specifications
		*/
	};
	class Seller {
		std::string Name, Password, User_ID, contact_no, Designation, Personal_Information;

		/*Behaviours
		1. Edit Products
		2. View Order
		3. Accept Order
		4. Reject Order
		5. Informative Chat
		6. User data access
		7. Update Profile
		8. Promotion
		*/
	};
	class Order {
		std::string category, ID, date, price, tracking_ID;

		/*Behaviours
		1. Check Voucher
		2. Total Price
		3. Data access
		4. Order History
		5. Recommendations
		*/
	};
	class Payment {
		std::string Amount, Payment_ID, Payment_type, date, time;

		/*Behaviours
		1. Payment stats
		2. Payment process
		3. Confirmation
		4. Notifications
		5. Payment Methods
		6. Generate Payment
		7. Discount deduction
		*/
	};
};