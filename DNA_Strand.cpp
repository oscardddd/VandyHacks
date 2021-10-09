// File name: DNA_Strand.cpp
// Author: 
// VUnetid: 
// Email: 
// Class: CS2201
// Date: 
// Honor statement:
// Assignment Number: ##
// Description: This will be an DNA_Strand implemented with a linked list.


#include "DNA_Strand.h"
#include <stdexcept>
#include <cassert>

// Constructor
// Create an empty DNA_Strand.
DNA_Strand::DNA_Strand()
{
    // add your code here or on initialization list
}


// Constructor
// Create an initialized DNA_Strand.
// A linked list the size of ipStr will be created and initialized
// with the characters in ipStr
DNA_Strand::DNA_Strand(const std::string &ipStr)
{
    std::string junk(ipStr); // DELETE THIS AND REPLACE WITH YOUR CODE. THIS IS ONLY HERE TEMPORARILY TO MAKE THE COMPILER HAPPY
    // add your code here or on initialization list
}


// The copy constructor. 
DNA_Strand::DNA_Strand(const DNA_Strand &rhs)
{
    std::string junk(rhs.toString()); // DELETE THIS AND REPLACE WITH YOUR CODE. THIS IS ONLY HERE TEMPORARILY TO MAKE THE COMPILER HAPPY
    // add your code here or on initialization list
}


// Destructor
// Clean up the DNA_Strand (e.g., delete dynamically allocated memory).
DNA_Strand::~DNA_Strand()
{
    // add your code here
}


// Assignment operator performs an assignment by making a copy of
// the contents of parameter <rhs>
const DNA_Strand & DNA_Strand::operator=(const DNA_Strand &rhs)
{
    std::string junk(rhs.toString()); // DELETE THIS AND REPLACE WITH YOUR CODE. THIS IS ONLY HERE TEMPORARILY TO MAKE THE COMPILER HAPPY
    // add your code here
    return *this;
}


//toString
//Returns string equivalent of the DNA
std::string DNA_Strand::toString() const
{
    return "junk";  // DELETE THIS AND REPLACE WITH YOUR CODE.
}


// Set an item in the DNA_Strand at location index. Throws
// <std::out_of_range> if index is out of range, i.e., larger than or
// equal to the current size of the DNA_Strand.
// Uses zero-based indexing.
void DNA_Strand::set(char new_item, size_t index)
{
    std::string junk(std::to_string(index+new_item)); // DELETE THIS AND REPLACE WITH YOUR CODE. THIS IS ONLY HERE TEMPORARILY TO MAKE THE COMPILER HAPPY
}

// Get an item in the DNA_Strand at location index. Throws
// <std::out_of_range> if index is out of range, i.e., larger than or
// equal to the current size of the DNA_Strand.
// Uses zero-based indexing.
char DNA_Strand::get(size_t index) const
{
    std::string junk(std::to_string(index)); // DELETE THIS AND REPLACE WITH YOUR CODE. THIS IS ONLY HERE TEMPORARILY TO MAKE THE COMPILER HAPPY
    return '?';
}


// Returns the size of the DNA
size_t DNA_Strand::size() const
{
    return 999999;  // DELETE THIS AND REPLACE WITH YOUR CODE.
}


// isEqual
// Compare this DNA_Strand with rhs for equality. Returns true if the
// size()'s of the two DNA_Strands are equal and all the elements of the
// linked list are equal, else false.
bool DNA_Strand::isEqual(const DNA_Strand &rhs) const
{
    std::string junk(rhs.toString()); // DELETE THIS AND REPLACE WITH YOUR CODE. THIS IS ONLY HERE TEMPORARILY TO MAKE THE COMPILER HAPPY
    return false;  // DELETE THIS AND REPLACE WITH YOUR CODE.
}


// search
// Look for target in current DNA strand and return index.
// Return -1 if not found.
int DNA_Strand::search(const std::string &target) const
{
    std::string junk(target); // DELETE THIS AND REPLACE WITH YOUR CODE. THIS IS ONLY HERE TEMPORARILY TO MAKE THE COMPILER HAPPY
    return -1;  // DELETE THIS AND REPLACE WITH YOUR CODE.
}

// search
// search with start position specified
// Look for target in current DNA strand and return index.
// Return -1 if not found.
int DNA_Strand::search(size_t pos, const std::string &target) const
{
    std::string junk(target+std::to_string(pos)); // DELETE THIS AND REPLACE WITH YOUR CODE. THIS IS ONLY HERE TEMPORARILY TO MAKE THE COMPILER HAPPY
    return -1;  // DELETE THIS AND REPLACE WITH YOUR CODE.
}


// search with start position specified by a DnaNodePtr
// Look for target in current DNA strand and return a pointer to it
// Return nullptr if not found.
DnaNodePtr DNA_Strand::search(DnaNodePtr startPtr, const std::string &target) const
{
    std::string junk(target); // DELETE THIS AND REPLACE WITH YOUR CODE. THIS IS ONLY HERE TEMPORARILY TO MAKE THE COMPILER HAPPY
    DnaNodePtr junk2(startPtr); junk2=junk2->next; // DELETE THIS AND REPLACE WITH YOUR CODE. THIS IS ONLY HERE TEMPORARILY TO MAKE THE COMPILER HAPPY
    return nullptr;  // DELETE THIS AND REPLACE WITH YOUR CODE.
}


// cleave
// Removes from current DNA strand the sequence between the end of the 
// first occurrence of passed target sequence (e.g. "TTG"), through the end
// of the second occurence of the target sequence. 
// pre: Array e.g. ACTTGACCTTGA and target e.g. "TTG"
// post: ACTTGA  (ACCTTG removed)
void DNA_Strand::cleave(const std::string &target)
{
    std::string junk(target); // DELETE THIS AND REPLACE WITH YOUR CODE. THIS IS ONLY HERE TEMPORARILY TO MAKE THE COMPILER HAPPY
}


// cleave with start position specified.
// Start position is specified as an index.
void DNA_Strand::cleave(size_t pos, const std::string &target)
{
    std::string junk(target+std::to_string(pos)); // DELETE THIS AND REPLACE WITH YOUR CODE. THIS IS ONLY HERE TEMPORARILY TO MAKE THE COMPILER HAPPY
}


// cleave with start position specified.
// Start position is specified with a DnaNodePtr.
// If no cleave is performed, returns nullptr
// Otherwise, return pointer to next node after the cleave, ie,
//   returned ptr points to the node after the cleaved sequence (could be
//   nullptr if the cleaved sequence was at the end of the strand).
DnaNodePtr DNA_Strand::cleave(DnaNodePtr startPtr, const std::string &target)
{
    std::string junk(target); // DELETE THIS AND REPLACE WITH YOUR CODE. THIS IS ONLY HERE TEMPORARILY TO MAKE THE COMPILER HAPPY
    DnaNodePtr junk2(startPtr); junk2=junk2->next; // DELETE THIS AND REPLACE WITH YOUR CODE. THIS IS ONLY HERE TEMPORARILY TO MAKE THE COMPILER HAPPY
    return nullptr;
}


// cleaveAll
// Removes from current DNA strand the sequence between pairs of target 
// sequence, i.e. from the end 1 through the end of 2, from the end of 3 
// through the end of 4, etc, but NOT from the end of 2 through the end 3,
// or from the end of 4 through the end of 5.
// (Make sure that you understand the specification)
// pre: Array e.g. ACTTGATTGGGTTGCTTGCC and target e.g. "TTG"
// post: ACTTGGGTTGCC (ATTG and CTTG removed)
void DNA_Strand::cleaveAll(const std::string &target)
{
    std::string junk(target); // DELETE THIS AND REPLACE WITH YOUR CODE. THIS IS ONLY HERE TEMPORARILY TO MAKE THE COMPILER HAPPY
}


// countEnzyme
// Counts the number of occurences of a single character target sequence
// in the DNA strand.
size_t DNA_Strand::countEnzyme(char target) const
{
    std::string junk(std::to_string(target)); // DELETE THIS AND REPLACE WITH YOUR CODE. THIS IS ONLY HERE TEMPORARILY TO MAKE THE COMPILER HAPPY
    return 999999;  // DELETE THIS AND REPLACE WITH YOUR CODE.
}

// countEnzyme -- overloaded
// string parameter version
// Counts non-overlapping instances of the target
// Eg, the target "AAA" appears 3 non-overlapping times in the DNA "AAAAAAAAA"
// Precondition: the target is a nonempty string.
size_t DNA_Strand::countEnzyme(const std::string &target) const
{
    std::string junk(target); // DELETE THIS AND REPLACE WITH YOUR CODE. THIS IS ONLY HERE TEMPORARILY TO MAKE THE COMPILER HAPPY
    return 999999;  // DELETE THIS AND REPLACE WITH YOUR CODE.
}


// inRange : helper function
// Returns true if index is within range, i.e., 0 <= index < mySize 
// else returns false.
bool DNA_Strand::inRange(size_t index) const
{
    std::string junk(std::to_string(index)); // DELETE THIS AND REPLACE WITH YOUR CODE. THIS IS ONLY HERE TEMPORARILY TO MAKE THE COMPILER HAPPY
    return false;  // DELETE THIS AND REPLACE WITH YOUR CODE.
}


// append (accepting a string parameter)
// Append the characters of the parameter to the end of the current DNA.
// Example: if myDNA contained ACTTGA and "ACCTG" was received as a parameter, 
// then afterward myDNA will contain ACTTGAACCTG
void DNA_Strand::append(const std::string &rhs)
{
    std::string junk(rhs); // DELETE THIS AND REPLACE WITH YOUR CODE. THIS IS ONLY HERE TEMPORARILY TO MAKE THE COMPILER HAPPY
}

// append (accepting a DNA_Strand parameter)
// Append the characters of the parameter to the end of the current DNA.
// Example: if myDNA contained ACTTGA and ACCTG was received as a parameter, 
// then afterward myDNA will contain ACTTGAACCTG
void DNA_Strand::append(const DNA_Strand &rhs)
{
    std::string junk(rhs.toString()); // DELETE THIS AND REPLACE WITH YOUR CODE. THIS IS ONLY HERE TEMPORARILY TO MAKE THE COMPILER HAPPY
}


// splice (accepts 2 Strings representing sequences)
// finds first pair of targets in current DNA strand and replaces
// the sequence between the end of the first target through the end of the 
// second with the insertSequence. 
// If two instances of the target are not found, 
// then no changes are made.
void DNA_Strand::splice(const std::string &target,
                        const std::string &insertSequence)
{
    std::string junk(target+insertSequence); // DELETE THIS AND REPLACE WITH YOUR CODE. THIS IS ONLY HERE TEMPORARILY TO MAKE THE COMPILER HAPPY
}


// splice (also accepting a starting location specified as an index)
void DNA_Strand::splice(size_t pos, const std::string &target,
                        const std::string &insertSequence)
{
    std::string junk(target+insertSequence+std::to_string(pos)); // DELETE THIS AND REPLACE WITH YOUR CODE. THIS IS ONLY HERE TEMPORARILY TO MAKE THE COMPILER HAPPY
}


// splice (also accepting a starting location specified with a DnaNodePtr)
// If no splice is performed, returns nullptr
// Otherwise, return a pointer to the next node after the inserted sequence
DnaNodePtr DNA_Strand::splice(DnaNodePtr startPtr, const std::string &target,
                              const std::string &insertSequence)
{
    std::string junk(target+insertSequence+std::to_string(mySize)); // DELETE THIS AND REPLACE WITH YOUR CODE. THIS IS ONLY HERE TEMPORARILY TO MAKE THE COMPILER HAPPY
    DnaNodePtr junk2(startPtr); junk2=myDNA; junk2=junk2->next; // DELETE THIS AND REPLACE WITH YOUR CODE. THIS IS ONLY HERE TEMPORARILY TO MAKE THE COMPILER HAPPY
    return nullptr;   // DELETE THIS AND REPLACE WITH YOUR CODE.
}


