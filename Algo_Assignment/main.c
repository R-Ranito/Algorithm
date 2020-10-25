//
//  main.c
//  Algo_Assignment
//
//  Created by Rui Anselmo Dutra Ranito on 24/04/2019.
//  Copyright © 2019 Rui Anselmo Dutra Ranito. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#define TOTAL_STUDENTS 42

struct student_detail{
    char first_name[20];
    char surname[20];
    char student_ID[20];
    char course_ID[20];
};

//Function Prototypes
void student_name(struct student_detail* array);
void combine_data(struct student_detail* DT265A,struct student_detail* DT265C,struct student_detail* DT265B,struct student_detail* DT8900,struct student_detail* array);
void find_course(struct student_detail* array);
void find_surname(struct student_detail* array);
void sort(struct student_detail* array);
int BinarySearch(struct student_detail array[], int);

int main()
{
    struct student_detail DT265A[13];
    struct student_detail DT265C[9];
    struct student_detail DT265B[14];
    struct student_detail DT8900[6];
    struct student_detail array[42];
    struct student_detail *ptr = NULL;
    
    
    
    ptr = array;
    
    //DT265A
    strcpy(DT265A[0].first_name, "Green");
    strcpy(DT265A[0].surname, "Arrow");
    strcpy(DT265A[0].student_ID, "DT265A-1");
    strcpy(DT265A[0].course_ID, "DT265A");
    
    strcpy(DT265A[1].first_name, "Harley");
    strcpy(DT265A[1].surname, "Quinn");
    strcpy(DT265A[1].student_ID, "DT265A-2");
    strcpy(DT265A[1].course_ID, "DT265A");
    
    strcpy(DT265A[2].first_name, "Captain");
    strcpy(DT265A[2].surname, "Cold");
    strcpy(DT265A[2].student_ID, "DT265A-3");
    strcpy(DT265A[2].course_ID, "DT265A");
    
    strcpy(DT265A[3].first_name, "Black");
    strcpy(DT265A[3].surname, "Adan");
    strcpy(DT265A[3].student_ID, "DT265A-4");
    strcpy(DT265A[3].course_ID, "DT265A");
    
    strcpy(DT265A[4].first_name, "Lex");
    strcpy(DT265A[4].surname, "Luthor");
    strcpy(DT265A[4].student_ID, "DT265A-55");
    strcpy(DT265A[4].course_ID, "DT265A");
    
    strcpy(DT265A[5].first_name, "Poison");
    strcpy(DT265A[5].surname, "Ivy");
    strcpy(DT265A[5].student_ID, "DT265A-6");
    strcpy(DT265A[5].course_ID, "DT265A");
    
    strcpy(DT265A[6].first_name, "Red");
    strcpy(DT265A[6].surname, "Skull");
    strcpy(DT265A[6].student_ID, "DT265A-7");
    strcpy(DT265A[6].course_ID, "DT265A");
    
    strcpy(DT265A[7].first_name, "Clark");
    strcpy(DT265A[7].surname, "Kent");
    strcpy(DT265A[7].student_ID, "DT265A-8");
    strcpy(DT265A[7].course_ID, "DT265A");
    
    strcpy(DT265A[8].first_name, "Carol");
    strcpy(DT265A[8].surname, "Danvers");
    strcpy(DT265A[8].student_ID, "DT265A-9");
    strcpy(DT265A[8].course_ID, "DT265A");
    
    strcpy(DT265A[9].first_name, "Bruce");
    strcpy(DT265A[9].surname, "Banner");
    strcpy(DT265A[9].student_ID, "DT265A-10");
    strcpy(DT265A[9].course_ID, "DT265A");
    
    strcpy(DT265A[10].first_name, "Black");
    strcpy(DT265A[10].surname, "Widow");
    strcpy(DT265A[10].student_ID, "DT265A-11");
    strcpy(DT265A[10].course_ID, "DT265A");
    
    strcpy(DT265A[11].first_name, "Steve");
    strcpy(DT265A[11].surname, "Rogers");
    strcpy(DT265A[11].student_ID, "DT265A-12");
    strcpy(DT265A[11].course_ID, "DT265A");
    
    strcpy(DT265A[12].first_name, "Tony");
    strcpy(DT265A[12].surname, "Stark");
    strcpy(DT265A[12].student_ID, "DT265A-13");
    strcpy(DT265A[12].course_ID, "DT265A");
    
    //DT265C
    strcpy(DT265C[0].first_name, "Scott");
    strcpy(DT265C[0].surname, "Lang");
    strcpy(DT265C[0].student_ID, "DT265C-1");
    strcpy(DT265C[0].course_ID, "DT265C");
    
    strcpy(DT265C[1].first_name, "Henry");
    strcpy(DT265C[1].surname, "Mccoy");
    strcpy(DT265C[1].student_ID, "DT265C-2");
    strcpy(DT265C[1].course_ID, "DT265C");
    
    strcpy(DT265C[2].first_name, "Black ");
    strcpy(DT265C[2].surname, "Cat");
    strcpy(DT265C[2].student_ID, "DT265C-3");
    strcpy(DT265C[2].course_ID, "DT265C");
    
    strcpy(DT265C[3].first_name, "Luke");
    strcpy(DT265C[3].surname, "Cage");
    strcpy(DT265C[3].student_ID, "DT265C-4");
    strcpy(DT265C[3].course_ID, "DT265C");
    
    strcpy(DT265C[4].first_name, "Jessica");
    strcpy(DT265C[4].surname, "Jones");
    strcpy(DT265C[4].student_ID, "DT265C-5");
    strcpy(DT265C[4].course_ID, "DT265C");
    
    strcpy(DT265C[5].first_name, "Luke");
    strcpy(DT265C[5].surname, "Skywalker");
    strcpy(DT265C[5].student_ID, "DT265C-6");
    strcpy(DT265C[5].course_ID, "DT265C");
    
    strcpy(DT265C[6].first_name, "Darth");
    strcpy(DT265C[6].surname, "Vader");
    strcpy(DT265C[6].student_ID, "DT265C-7");
    strcpy(DT265C[6].course_ID, "DT265C");
    
    strcpy(DT265C[7].first_name, "Frank");
    strcpy(DT265C[7].surname, "Castle");
    strcpy(DT265C[7].student_ID, "DT265C-8");
    strcpy(DT265C[7].course_ID, "DT265C");
    
    strcpy(DT265C[8].first_name, "Silver ");
    strcpy(DT265C[8].surname, "Surfer");
    strcpy(DT265C[8].student_ID, "DT265C-9");
    strcpy(DT265C[8].course_ID, "DT265C");
    
    //DT265B
    strcpy(DT265B[0].first_name, "Jean");
    strcpy(DT265B[0].surname, "Grey");
    strcpy(DT265B[0].student_ID, "DT265B-1");
    strcpy(DT265B[0].course_ID, "DT265B");
    
    strcpy(DT265B[1].first_name, "Emma");
    strcpy(DT265B[1].surname, "Frost");
    strcpy(DT265B[1].student_ID, "DT265B-2");
    strcpy(DT265B[1].course_ID, "DT265B");
    
    strcpy(DT265B[2].first_name, "She");
    strcpy(DT265B[2].surname, "Hulk");
    strcpy(DT265B[2].student_ID, "DT265B-3");
    strcpy(DT265B[2].course_ID, "DT265B");
    
    strcpy(DT265B[3].first_name, "Kitty");
    strcpy(DT265B[3].surname, "Pryde");
    strcpy(DT265B[3].student_ID, "DT265B-4");
    strcpy(DT265B[3].course_ID, "DT265B");
    
    strcpy(DT265B[4].first_name, "Iron");
    strcpy(DT265B[4].surname, "Fist");
    strcpy(DT265B[4].student_ID, "DT265B-5");
    strcpy(DT265B[4].course_ID, "DT265B");
    
    strcpy(DT265B[5].first_name, "Scarlet");
    strcpy(DT265B[5].surname, "Witch");
    strcpy(DT265B[5].student_ID, "DT265B-6");
    strcpy(DT265B[5].course_ID, "DT265B");
    
    strcpy(DT265B[6].first_name, "Bruce");
    strcpy(DT265B[6].surname, "Wayne");
    strcpy(DT265B[6].student_ID, "DT265B-7");
    strcpy(DT265B[6].course_ID, "DT265B");
    
    strcpy(DT265B[7].first_name, "John");
    strcpy(DT265B[7].surname, "Constantine");
    strcpy(DT265B[7].student_ID, "DT265B-8");
    strcpy(DT265B[7].course_ID, "DT265B");
    
    strcpy(DT265B[8].first_name, "Wonder");
    strcpy(DT265B[8].surname, "Woman");
    strcpy(DT265B[8].student_ID, "DT265B-9");
    strcpy(DT265B[8].course_ID, "DT265B");
    
    strcpy(DT265B[9].first_name, "Barry");
    strcpy(DT265B[9].surname, "Allen");
    strcpy(DT265B[9].student_ID, "DT265B-10");
    strcpy(DT265B[9].course_ID, "DT265B");
    
    strcpy(DT265B[10].first_name, "Hal");
    strcpy(DT265B[10].surname, "Jordan");
    strcpy(DT265B[10].student_ID, "DT265B-11");
    strcpy(DT265B[10].course_ID, "DT265B");
    
    strcpy(DT265B[11].first_name, "Billy");
    strcpy(DT265B[11].surname, "Batson");
    strcpy(DT265B[11].student_ID, "DT265B-12");
    strcpy(DT265B[11].course_ID, "DT265B");
    
    strcpy(DT265B[12].first_name, "Dick");
    strcpy(DT265B[12].surname, "Grayson");
    strcpy(DT265B[12].student_ID, "DT265B-13");
    strcpy(DT265B[12].course_ID, "DT265B");
    
    strcpy(DT265B[13].first_name, "Peter");
    strcpy(DT265B[13].surname, "Parker");
    strcpy(DT265B[13].student_ID, "DT265B-14");
    strcpy(DT265B[13].course_ID, "DT265B");
    
    //DT8900
    strcpy(DT8900[0].first_name, "Beast");
    strcpy(DT8900[0].surname, "Boy");
    strcpy(DT8900[0].student_ID, "DT8900-1");
    strcpy(DT8900[0].course_ID, "DT8900");
    
    strcpy(DT8900[1].first_name, "Donna");
    strcpy(DT8900[1].surname, "Troy");
    strcpy(DT8900[1].student_ID, "DT8900-2");
    strcpy(DT8900[1].course_ID, "DT8900");
    
    strcpy(DT8900[2].first_name, "Roy");
    strcpy(DT8900[2].surname, "Harper");
    strcpy(DT8900[2].student_ID, "DT8900-3");
    strcpy(DT8900[2].course_ID, "DT8900");
    
    strcpy(DT8900[3].first_name, "Phanton");
    strcpy(DT8900[3].surname, "Strange");
    strcpy(DT8900[3].student_ID, "DT8900-4");
    strcpy(DT8900[3].course_ID, "DT8900");
    
    strcpy(DT8900[4].first_name, "Jay");
    strcpy(DT8900[4].surname, "Garrick");
    strcpy(DT8900[4].student_ID, "DT8900-5");
    strcpy(DT8900[4].course_ID, "DT8900");
    
    strcpy(DT8900[5].first_name, "Miss");
    strcpy(DT8900[5].surname, "Martian");
    strcpy(DT8900[5].student_ID, "DT8900-6");
    strcpy(DT8900[5].course_ID, "DT8900");
    
    int option;
    
    do
    {
        printf("\n\n********** DIT Student Records **********\n");
        
        printf("\n\nPress 1 to display all the students details.");
        printf("\n\nPress 2 to sort the students by Surname.");
        printf("\n\nPress 3 to display the full-time students.");
        printf("\n\nPress 4 to find a Student record by surname.");
        printf("\n\nPress 5 to exit.\n");
        
        printf("\n\nPlease enter your option\n");
        scanf("%d", &option);
        
        
        switch (option) {
                
            case 1:
            {
                combine_data(DT265A, DT265C, DT265B, DT8900, array);
                student_name(array);
                break;
            }//end option 1
                
            case 2:
            {
                combine_data(DT265A, DT265C, DT265B, DT8900, array);
                sort(array);
                break;
                
            }//end option 2
                
            case 3:
            {
                combine_data(DT265A, DT265C, DT265B, DT8900, array);
                find_course(array);
                break;
                
            }//end option 3
                
            case 4:
            {
                combine_data(DT265A, DT265C, DT265B, DT8900, array);
                find_surname(array);
                break;
                
            }//end option 4
                
            default:
            {
                printf("\nPlease enter a valid option\n");
                
            }//end default
                
                
        }//end switch statement
        
        
    }// end do
    
    while (option != 5);
    
    printf("******* Thank you!! ******\n");
}


void student_name(struct student_detail* array)
{
    struct student_detail *ptr = NULL;
    ptr = array;
    int i;
    printf("\n\n****** Student Details *********\n\n");
    printf("\nCourse_ID Student_ID Firt_name Surname \n");
    
    for(i=0;i<TOTAL_STUDENTS;i++)
    {
        printf("\n%s %s %s %s\n\n", ptr->course_ID, ptr->student_ID, ptr->first_name, ptr->surname);
        ptr++;
    }//end for
    
}


void find_course(struct student_detail* array)
{
    int i;
    printf("\n\n****** DIT Full-Time Student List *****\n\n");
    
    for(i=0;i<TOTAL_STUDENTS;i++)
    {
        if(strcmp(array[i].course_ID,"DT265B")==0 || (strcmp(array[i].course_ID,"DT8900")==0))
        {
            printf("\n%s %s  %s is a full-time student\n",array[i].student_ID, array[i].first_name,array[i].surname);
            
        }//end if
        
    }//end for
}//end function find_course()


void find_surname(struct student_detail* arr)
{
    char find[15];
    int i;
    bool Key = false;
    printf("\n\nPlease enter the Student Surname.\n");
    scanf("%s",find);
    
    for(i=0;i<TOTAL_STUDENTS;i++)
    {
        if(strcmp(arr[i].surname,find)==0)
        {
            printf("\nStudent %s %s  %s is in the files.\n",arr[i].course_ID, arr[i].first_name,arr[i].surname);
            Key = true;
        }//end if
        
    }//end for
    
    if(Key == false)
    {
        printf("\nSorry, Student file not found.\n");
    }//end if
}//end function find_surname



void combine_data(struct student_detail* DT265A,struct student_detail* DT265C,struct student_detail* DT265B,struct student_detail* DT8900,struct student_detail* array)
{
    int j;
    int i;
    for(i=0;i<13;i++)
    {
        strcpy(array[i].first_name,DT265A[i].first_name);
        strcpy(array[i].surname,DT265A[i].surname);
        strcpy(array[i].student_ID,DT265A[i].student_ID);
        strcpy(array[i].course_ID,DT265A[i].course_ID);
    }//end for
    j = 0;
    for(i=13;i<22;i++)
    {
        strcpy(array[i].first_name,DT265C[j].first_name);
        strcpy(array[i].surname,DT265C[j].surname);
        strcpy(array[i].student_ID,DT265C[j].student_ID);
        strcpy(array[i].course_ID,DT265C[j].course_ID);
        j++;
    }//end for
    j = 0;
    for(i=22;i<36;i++)
    {
        strcpy(array[i].first_name,DT265B[j].first_name);
        strcpy(array[i].surname,DT265B[j].surname);
        strcpy(array[i].student_ID,DT265B[j].student_ID);
        strcpy(array[i].course_ID,DT265B[j].course_ID);
        j++;
    }//end for
    j = 0;
    for(i=36;i<TOTAL_STUDENTS;i++)
    {
        strcpy(array[i].first_name,DT8900[j].first_name);
        strcpy(array[i].surname,DT8900[j].surname);
        strcpy(array[i].student_ID,DT8900[j].student_ID);
        strcpy(array[i].course_ID,DT8900[j].course_ID);
        j++;
    }//end for
    
}//end function combine_data

void sort(struct student_detail* array)
{
    
    //Binary insertion Sort
    struct student_detail Temp;
    int j;
    int k;
    for (int i = 0; i < TOTAL_STUDENTS; ++i)
    {
        
        
        k = BinarySearch(array,i);
        Temp = array[i];
        j = i;
        
        while (strcmp(Temp.surname, array[j - 1].surname) < 0 && j > k) {
            array[j] = array[j - 1];
            j--;
        }//end while
        
        array[j] = Temp;
    }//end for
    
    printf("\nStudent's List after sorting: \n");
    
    for (int k = 0; k < TOTAL_STUDENTS; ++k) {
        printf("\n %s %s %s \n", array[k].student_ID, array[k].surname, array[k].first_name);
    }//end for
    
}//end function sort()

int BinarySearch(struct student_detail A[], int Key)
{
    int low = 0;
    int high ;
    int middle;
    
    high = Key;
    
    while(low <= high) {
        middle = (low + high) / 2;
        if(strcmp(A[Key].surname, A[middle].surname) == 0) {
            return middle;
            
        }//end BinarySearch if the name is in the middle
        if(strcmp(A[Key].surname, A[middle].surname) < 0) {
            high = middle - 1;
            
        }//end BinarySearch if the name position is to high
        if(strcmp(A[Key].surname, A[middle].surname) > 0) {
            low = middle + 1;
            
        }//end if
        
    }//end while
    return -1;
}//end function BinarySearch()

