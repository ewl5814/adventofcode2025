using System;
using System.IO;

public class FindRolls {

    static string replace_x_at(int index, string str) {

     char[] chars = str.ToCharArray();

     chars[index] = 'x';

     return new string(chars);
    }

    static int get_rolls_in_radius(int i, int j, int i_length, int j_length, string[] lines) {
            int[,] possible_pos = {
            {i - 1, j - 1},
            {i - 1, j},
            {i - 1, j + 1},
            {i, j - 1},
            {i, j + 1},
            {i + 1, j - 1},
            {i + 1, j},
            {i + 1, j + 1}
            };

            if (i == 0) {
                possible_pos[0,0] = -1;
                possible_pos[0,1] = -1;
                possible_pos[1,0] = -1;
                possible_pos[1,1] = -1;
                possible_pos[2,0] = -1;
                possible_pos[2,1] = -1;
            }
            if (i == i_length) {
                possible_pos[5,0] = -1;
                possible_pos[5,1] = -1;
                possible_pos[6,0] = -1;
                possible_pos[6,1] = -1;
                possible_pos[7,0] = -1;
                possible_pos[7,1] = -1;
            }
            if (j == 0) {
                possible_pos[0,0] = -1;
                possible_pos[0,1] = -1;
                possible_pos[3,0] = -1;
                possible_pos[3,1] = -1;
                possible_pos[5,0] = -1;
                possible_pos[5,1] = -1;
            }
            if (j == j_length) {
                possible_pos[2,0] = -1;
                possible_pos[2,1] = -1;
                possible_pos[4,0] = -1;
                possible_pos[4,1] = -1;
                possible_pos[7,0] = -1;
                possible_pos[7,1] = -1;
            }

            int count = 0;
            int k;
           
            for (k = 0; k < 8; k++) {
                if (possible_pos[k,0] != -1 && lines[possible_pos[k,0]][possible_pos[k,1]] == '@') {
                    count++; 
                }
            }

            return count;
    } 

    static void Main(string[] args) {
       
        string input = File.ReadAllText (args[0]);
        string[] lines = input.Split("\n");

        int i;
        int j;

        int total_count = 0;

        while (true) {
            int curr_count = 0;
            for (i = 0; i < lines.Length - 1; i++) {
                int radius_count = 0;

                for (j = 0; j < lines[0].Length; j++) { 
                    if (lines[i][j] == '@') {
                        radius_count = get_rolls_in_radius(i, j, lines.Length - 2, lines[0].Length - 1, lines);

                        if (radius_count < 4) {
                            curr_count++; 
                            lines[i] = replace_x_at(j, lines[i]); 
                        }
                    }
                }
            }
 
            if (curr_count == 0) {
               break; 
            }
            else {
                total_count += curr_count; 
            }
        }

        Console.WriteLine("total: " + total_count);
   }
}

