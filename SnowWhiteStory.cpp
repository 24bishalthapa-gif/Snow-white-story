#include <iostream>
#include <string>
using namespace std;

// ============================================================
// Game Title: Snow White's Enchanted Journey
// Your Name:  Shreya Shrestha
// Course:     TXST 1100
// Description: Snow White flees the Evil Queen through a forest
// that keeps changing the rules on her. Five scenes, three wild
// endings, one extremely suspicious apple.
// ============================================================

// Scene declarations
void scene_intro();
void scene_forest();
void scene_cottage();
void scene_apple();
void scene_mirror();
void scene_good_ending();
void scene_bad_ending();
void scene_secret_ending();

// ============================================================
// MAIN PROGRAM
// ============================================================

int main() {
    scene_intro();
    return 0;
}

// ============================================================
// SCENE 1: THE ESCAPE
// ============================================================

void scene_intro() {

    cout << "\n============================================\n";
    cout << "       SNOW WHITE'S ENCHANTED JOURNEY\n";
    cout << "============================================\n\n";

    cout << "\"FAIREST OF THEM ALL?!\" the Queen shrieks at her mirror.\n";
    cout << "Snow White does not stick around for the rest of that sentence.\n";
    cout << "She's out the window and into the forest before the guards\n";
    cout << "even find their boots.\n\n";

    cout << "The trees ahead don't look like trees. They look like they're\n";
    cout << "WAITING for something.\n\n";

    cout << "1. Follow the path of glowing flowers.\n";
    cout << "2. Follow the sound of singing birds.\n";
    cout << "3. Take the dark, misty path nobody in their right mind takes.\n\n";

    int choice;
    cout << "Enter your choice (1, 2, or 3): ";
    cin >> choice;

    if (choice == 1) {
        scene_forest();
    }
    else if (choice == 2) {
        scene_cottage();
    }
    else {
        scene_mirror();
    }
}

// ============================================================
// SCENE 2: THE ENCHANTED FOREST
// ============================================================

void scene_forest() {

    cout << "\n--------------------------------------------\n";
    cout << "           THE ENCHANTED FOREST\n";
    cout << "--------------------------------------------\n\n";

    cout << "The glowing flowers turn black the second she looks away.\n";
    cout << "Behind her: \"FIND HER! SHE CANNOT HAVE GONE FAR!\"\n";
    cout << "In front of her: a massive fallen tree, blocking everything.\n\n";

    cout << "1. Climb over the tree.\n";
    cout << "2. Dive into a hollow log.\n";
    cout << "3. Sprint toward the sound of rushing water.\n\n";

    int choice;
    cout << "Enter your choice (1, 2, or 3): ";
    cin >> choice;

    if (choice == 1) {
        cout << "\nCRACK. A branch snaps under her foot. So much for stealth.\n";
        scene_bad_ending();
    }
    else if (choice == 2) {
        cout << "\nShe holds her breath. Boots march past, inches away.\n";
        cout << "Silence. She's clear.\n";
        scene_cottage();
    }
    else {
        cout << "\nShe bursts through the reeds -- and finds a bridge.\n";
        cout << "On the other side: a crooked little cottage.\n";
        scene_cottage();
    }
}

// ============================================================
// SCENE 3: THE DWARFS' COTTAGE
// ============================================================

void scene_cottage() {

    cout << "\n--------------------------------------------\n";
    cout << "             THE DWARFS' COTTAGE\n";
    cout << "--------------------------------------------\n\n";

    cout << "Seven tiny chairs. Seven tiny beds. Zero dwarfs.\n";
    cout << "A note on the table just says: \"TRUST NO ONE.\"\n\n";

    cout << "KNOCK. KNOCK. KNOCK.\n";
    cout << "\"Poor child... I have something beautiful for you.\"\n\n";

    cout << "1. Open the door.\n";
    cout << "2. Hide under the table.\n";
    cout << "3. Bolt out the back.\n\n";

    int choice;
    cout << "Enter your choice (1, 2, or 3): ";
    cin >> choice;

    if (choice == 1) {
        scene_apple();
    }
    else if (choice == 2) {
        cout << "\nThe door creaks open. Footsteps circle the room. Nothing.\n";
        cout << "The visitor leaves. Under the table, a second note:\n";
        cout << "\"The Queen is closer than you think.\"\n";
        scene_mirror();
    }
    else {
        cout << "\nShe's out the back and into the trees before the door opens.\n";
        cout << "A trail winds straight toward the mountains.\n";
        scene_forest();
    }
}

// ============================================================
// SCENE 4: THE POISONED APPLE
// ============================================================

void scene_apple() {

    cout << "\n--------------------------------------------\n";
    cout << "             THE POISONED APPLE\n";
    cout << "--------------------------------------------\n\n";

    cout << "An old woman in a dark cloak holds out a bright red apple.\n";
    cout << "\"Eternal beauty, dear child.\" Her voice is a little too smooth.\n\n";

    cout << "One half of the apple glows. The other half is pitch black.\n";
    cout << "That is definitely not normal fruit behavior.\n\n";

    cout << "1. Take a bite.\n";
    cout << "2. Slap it out of her hand.\n";
    cout << "3. Ask who she REALLY is.\n\n";

    int choice;
    cout << "Enter your choice (1, 2, or 3): ";
    cin >> choice;

    if (choice == 1) {
        scene_bad_ending();
    }
    else if (choice == 2) {
        cout << "\nThe apple hits the dirt. The old woman SCREAMS --\n";
        cout << "and the cloak melts away. The Evil Queen. Obviously.\n";
        scene_mirror();
    }
    else {
        cout << "\n\"You're cleverer than I expected,\" the old woman purrs,\n";
        cout << "peeling off her disguise like old wallpaper.\n";
        cout << "The Evil Queen raises a hand crackling with magic.\n";
        scene_mirror();
    }
}

// ============================================================
// SCENE 5: THE MAGIC MIRROR
// ============================================================

void scene_mirror() {

    cout << "\n--------------------------------------------\n";
    cout << "           THE QUEEN'S MAGIC MIRROR\n";
    cout << "--------------------------------------------\n\n";

    cout << "A hidden chamber beneath the forest. A massive mirror looms,\n";
    cout << "glowing like it knows something you don't.\n\n";

    cout << "\"Only one can be fairest,\" it hisses.\n";
    cout << "The Queen steps out of the shadows behind her.\n";
    cout << "\"You've run long enough, Snow White.\"\n\n";

    cout << "1. Run for the secret exit.\n";
    cout << "2. Smash the mirror.\n";
    cout << "3. Turn around and face her.\n\n";

    int choice;
    cout << "Enter your choice (1, 2, or 3): ";
    cin >> choice;

    if (choice == 1) {
        scene_good_ending();
    }
    else if (choice == 2) {
        scene_secret_ending();
    }
    else {
        scene_bad_ending();
    }
}

// ============================================================
// GOOD ENDING
// ============================================================

void scene_good_ending() {

    cout << "\n============================================\n";
    cout << "              GOOD ENDING!\n";
    cout << "============================================\n\n";

    cout << "She's through the exit before the Queen can blink.\n";
    cout << "The forest opens into sunlight -- and seven dwarfs, axes\n";
    cout << "raised, ready to fight for her.\n\n";

    cout << "The Queen's power flickers out behind her, useless.\n";
    cout << "Snow White made it. THE END.\n";
}

// ============================================================
// BAD ENDING
// ============================================================

void scene_bad_ending() {

    cout << "\n============================================\n";
    cout << "               GAME OVER!\n";
    cout << "============================================\n\n";

    cout << "The trap closes. The forest goes quiet.\n";
    cout << "Somewhere, a mirror smiles. THE END.\n";
}

// ============================================================
// SECRET ENDING
// ============================================================

void scene_secret_ending() {

    cout << "\n============================================\n";
    cout << "             SECRET ENDING!\n";
    cout << "============================================\n\n";

    cout << "One swing. The mirror SHATTERS into a thousand shards of light.\n";
    cout << "The Queen screams as her stolen magic rips away from her.\n\n";

    cout << "No curse. No crown. Just a forest, finally quiet, and one\n";
    cout << "girl who broke a thousand-year-old spell with a rock.\n";
    cout << "YOU BROKE THE CURSE! THE END.\n";
}
