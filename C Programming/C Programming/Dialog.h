#ifndef __DIALOG_H__
#define __DIALOG_H__

#define LEN 30
#define BLEN 100

enum {
	Insert = 1,
	Delete,
	Search,
	Printall,
	Exit
};

typedef struct
{
	char name[LEN], phone[LEN];
} PBook;

void Menu(int* idx);

int Menu_Insert(PBook pb[], int* idx);

int Menu_Delete(PBook pb[], int* idx);

int Menu_Search(PBook pb[], int* idx);

void Menu_Print_All(PBook pb[], int* idx);

#endif