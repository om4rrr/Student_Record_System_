#ifndef VALIDATION_H
#define VALIDATION_H

#include "../Linked_List/Linked_List.h"
#include "../Libraries/Libraries.h"
#include "../Struct/Struct.h"
#include "../Linked_List/Linked_List.h"

long ValidateIDLength();

char *ValidateNationalIDLength();

long ValidatePhoneNumberLength();

long CheckPhoneNumber();

bool isChar(char c);

bool isDigit(const char c);

bool IsValid(char *email);

char *CheckMailValidation();

long CheckExistingID(StudentNode *head);

char* ValidName();

char *CheckingPasswordStrength();

char *CheckingRandomPasswordStrength();

int ValidateStudentAge();

char* ValidateGender();

int ValidateSubjectDegree();

int ChoiceSubjectValidate();

int ChooseModeValidate();

int ChooseStudentFeaturesValidate(StudentNode *Head, long ID);

int ChoiceAnotherSubjectValidate();

bool CheckStudentData(StudentNode *CurrentStudent,long ID);

long CheckStudentID(StudentNode *Head);

bool CheckStudentPassword(StudentNode *CurrentStudent, long ID);


#endif