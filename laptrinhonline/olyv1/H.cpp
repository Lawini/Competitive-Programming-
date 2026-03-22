#include <bits/stdc++.h>
using namespace std;
int main(){
string note_input; int x; cin >> note_input >> x;

vector<string> notes = {"C", "C#", "D", "D#", "E", "F",
                        "F#", "G", "G#", "A", "A#", "B"};
// Tách tên nốt và số quãng tám
string base_note;
int octave;

if (note_input.size() == 3) {
    base_note = note_input.substr(0, 2);  // VD: C#
    octave = note_input[2] - '0';
} else {
    base_note = note_input.substr(0, 1);  // VD: C
    octave = note_input[1] - '0';
}

// Tìm index của base_note trong notes
int note_index = -1;
for (int i = 0; i < (int)notes.size(); i++) {
    if (notes[i] == base_note) {
        note_index = i;
        break;
    }
}

// Tính vị trí tổng (nửa cung) của nốt đầu
int pos = octave * 12 + note_index;

// Tăng lên x nửa cung
int pos_new = pos + x;

// Chuyển ngược lại thành nốt mới
int octave_new = pos_new / 12;
int note_new_index = pos_new % 12;

cout << notes[note_new_index] << octave_new << "\n";

return 0;

}