#pragma once

#include <string>
#include <array>


namespace MyShoppingList {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/* The purpose of this form is to allow the user to add and remove items from their shopping list.  Each entry has a check box next to it,
	   allowing for bool operators to determine which entries to remove when it comes time. This program doesn't inlcude prices for items or anything
	   special, it's just a simple form to keep track of groceries.  I might come back through later on and update the program, but I am satisfied with
	   the logic I included in it for now. */

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			// Default constructor
			InitializeComponent();
		}

	protected:
		// Destructor...for all components
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::ListView^ shoppingList;
	protected:

	private: System::Windows::Forms::TextBox^ addItemBox;
	private: System::Windows::Forms::Button^ addItemButton;
	private: System::Windows::Forms::Button^ removeItemButton;


	private: System::Windows::Forms::Label^ addItemLabel;
	private: System::Windows::Forms::PictureBox^ catBox;

	private: System::Windows::Forms::Button^ catButton;
	private: System::ComponentModel::IContainer^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->shoppingList = (gcnew System::Windows::Forms::ListView());
			this->addItemBox = (gcnew System::Windows::Forms::TextBox());
			this->addItemButton = (gcnew System::Windows::Forms::Button());
			this->removeItemButton = (gcnew System::Windows::Forms::Button());
			this->addItemLabel = (gcnew System::Windows::Forms::Label());
			this->catBox = (gcnew System::Windows::Forms::PictureBox());
			this->catButton = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->catBox))->BeginInit();
			this->SuspendLayout();
			// 
			// shoppingList
			// 
			this->shoppingList->BackColor = System::Drawing::Color::PaleGoldenrod;
			this->shoppingList->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->shoppingList->CheckBoxes = true;
			this->shoppingList->Dock = System::Windows::Forms::DockStyle::Left;
			this->shoppingList->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->shoppingList->FullRowSelect = true;
			this->shoppingList->HideSelection = false;
			this->shoppingList->Location = System::Drawing::Point(0, 0);
			this->shoppingList->Name = L"shoppingList";
			this->shoppingList->Size = System::Drawing::Size(199, 415);
			this->shoppingList->TabIndex = 0;
			this->shoppingList->UseCompatibleStateImageBehavior = false;
			this->shoppingList->View = System::Windows::Forms::View::List;
			// 
			// addItemBox
			// 
			this->addItemBox->Location = System::Drawing::Point(377, 179);
			this->addItemBox->Name = L"addItemBox";
			this->addItemBox->Size = System::Drawing::Size(177, 20);
			this->addItemBox->TabIndex = 1;
			// 
			// addItemButton
			// 
			this->addItemButton->Location = System::Drawing::Point(425, 205);
			this->addItemButton->Name = L"addItemButton";
			this->addItemButton->Size = System::Drawing::Size(88, 23);
			this->addItemButton->TabIndex = 3;
			this->addItemButton->Text = L"Add Item";
			this->addItemButton->UseVisualStyleBackColor = true;
			this->addItemButton->Click += gcnew System::EventHandler(this, &MyForm::addItemButton_Click);
			// 
			// removeItemButton
			// 
			this->removeItemButton->Location = System::Drawing::Point(377, 299);
			this->removeItemButton->Name = L"removeItemButton";
			this->removeItemButton->Size = System::Drawing::Size(177, 23);
			this->removeItemButton->TabIndex = 4;
			this->removeItemButton->Text = L"Remove Checked Items";
			this->removeItemButton->UseVisualStyleBackColor = true;
			this->removeItemButton->Click += gcnew System::EventHandler(this, &MyForm::removeItemButton_Click);
			// 
			// addItemLabel
			// 
			this->addItemLabel->AutoSize = true;
			this->addItemLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addItemLabel->Location = System::Drawing::Point(230, 182);
			this->addItemLabel->Name = L"addItemLabel";
			this->addItemLabel->Size = System::Drawing::Size(117, 13);
			this->addItemLabel->TabIndex = 7;
			this->addItemLabel->Text = L"Enter name of item:";
			// 
			// catBox
			// 
			this->catBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"catBox.Image")));
			this->catBox->Location = System::Drawing::Point(236, 12);
			this->catBox->Name = L"catBox";
			this->catBox->Size = System::Drawing::Size(318, 159);
			this->catBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->catBox->TabIndex = 8;
			this->catBox->TabStop = false;
			this->catBox->Visible = false;
			// 
			// catButton
			// 
			this->catButton->Location = System::Drawing::Point(354, 84);
			this->catButton->Name = L"catButton";
			this->catButton->Size = System::Drawing::Size(75, 23);
			this->catButton->TabIndex = 9;
			this->catButton->Text = L"Cat\?";
			this->catButton->UseVisualStyleBackColor = true;
			this->catButton->Click += gcnew System::EventHandler(this, &MyForm::catButton_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(581, 415);
			this->Controls->Add(this->catButton);
			this->Controls->Add(this->catBox);
			this->Controls->Add(this->addItemLabel);
			this->Controls->Add(this->removeItemButton);
			this->Controls->Add(this->addItemButton);
			this->Controls->Add(this->addItemBox);
			this->Controls->Add(this->shoppingList);
			this->Name = L"MyForm";
			this->Text = L"Shopping List";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->catBox))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		// keep track of active elements
		int counter{ 0 };

		// add a non-empty element to the shopping list
		public: System::Void addItemButton_Click(System::Object^ sender, System::EventArgs^ e) {
			if (addItemBox->Text != "") {
				shoppingList->Items->Add(addItemBox->Text);
				counter++;
			}
			addItemBox->Text = "";
		}

		// remove the checked items
		public: System::Void removeItemButton_Click(System::Object^ sender, System::EventArgs^ e) {
			int numRemoved{ 0 };
			for (int i{ 0 }; i < counter; i++) {
				if (shoppingList->Items[i]->Checked) {
					shoppingList->Items->RemoveAt(i);
					i--;
					counter--;
				}
			}
		}

		// print a picture of a cat for obvious cat lovers
		private: System::Void catButton_Click(System::Object^ sender, System::EventArgs^ e) {
			catButton->Visible = false;
			catBox->Visible = true;
		}
};
}