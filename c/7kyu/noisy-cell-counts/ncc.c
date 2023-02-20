#include <stddef.h>

//  don't allocate memory for the resulting array
//  assign values to preallocated pointer *output

void cleaned_counts(size_t length, const unsigned data[length], unsigned output[length]) {

    // Loop through array
    for (int i = 0; i < length; i++)
    {
        output[i] = data[i];

        // Check if element is incorrect
        if (i != 0 && output[i] < output[i - 1])
        {
            output[i] = output[i - 1]; // Adjust values
        }
    }
}