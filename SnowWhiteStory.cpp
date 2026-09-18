#include <iostream>
#include <string>
using namespace std;

// ============================================================
// Game Title: Snow White and the Shattered Mirror
// Your Name:  Shreya Shrestha
// Course:     TXST 1100
// Description: Snow White flees into a forest that is far more
//   alive than it should be, chasing rumors of a Magic Mirror
//   that has been whispering lies into the Evil Queen's ear for
//   a thousand years. Nine paths, six endings, one very cursed
//   apple.
// ============================================================

// Scene declarations
void scene_intro();
void scene_forest();
void scene_cottage();
void scene_beast();
void scene_deeper_woods();
void scene_dwarves();
void scene_apple();
void scene_mirror_clearing();
void scene_final_stand();

// Ending declarations
void scene_ending_good();
void scene_ending_redeemed();
void scene_ending_bad();
void scene_ending_cursed_sleep();
void scene_ending_captured();
void scene_ending_shatter();

// ============================================================
// MAIN PROGRAM
// ============================================================

int main() {
    scene_intro();
    return 0;
}

// ============================================================
// SCENE 1: Introduction
// ============================================================

void scene_intro() {

    cout << "\n============================================\n";
    cout << "     SNOW WHITE AND THE SHATTERED MIRROR\n";
    cout << "============================================\n\n";

    cout << "The castle doors SLAM shut behind you. Somewhere in the dark,\n";
    cout << "the Huntsman's torch is still burning -- but you outran him,\n";
    cout << "and now you are alone at the edge of a forest that should not,\n";
    cout << "by any law of nature, be whispering your name.\n\n";

    cout << "\"Miiiirror, miiiirror...\" the wind seems to hiss through the leaves.\n";
    cout << "You do not know it yet, but somewhere deep in these woods hangs\n";
    cout << "an ancient obsidian mirror -- the very one that turned your\n";
    cout << "stepmother from a queen into a monster. And it is not finished\n";
    cout << "whispering.\n\n";

    cout << "What do you do?\n";
    cout << "1. Sprint down the moonlit path and never look back.\n";
    cout << "2. Search for a cottage -- any light in this cursed dark.\n";
    cout << "3. Freeze, hide, and hope the forest forgets you exist.\n\n";

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
        scene_apple();
    }
}

// ============================================================
// SCENE 2: The Forest That Breathes
// ============================================================

void scene_forest() {

    cout << "\nThe path twists like it's alive, and maybe it is. Branches\n";
    cout << "curl overhead like clawed fingers, and the moon keeps vanishing\n";
    cout << "behind clouds that move far too fast to be natural.\n\n";

    cout << "Then you hear it: a low, ragged growl, dragging itself closer\n";
    cout << "through the underbrush. Something massive. Something wounded.\n";
    cout << "Something... crying?\n\n";

    cout << "What do you do?\n";
    cout << "1. Creep toward the sound. Whatever it is, it sounds like it's in pain.\n";
    cout << "2. RUN. This is exactly how every horror story starts.\n\n";

    int choice;
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    if (choice == 1) {
        scene_beast();
    }
    else {
        scene_deeper_woods();
    }
}

// ============================================================
// SCENE 3: The Cottage of Seven Suspicious Little Men
// ============================================================

void scene_cottage() {

    cout << "\nA crooked little cottage rises out of the fog, chimney puffing\n";
    cout << "purple smoke that smells like pine needles and gunpowder. Seven\n";
    cout << "small silhouettes are visible through the window, sharpening\n";
    cout << "axes that are absolutely not for chopping wood.\n\n";

    cout << "What do you do?\n";
    cout << "1. Kick the door open like you own the place.\n";
    cout << "2. Knock politely, like a person who wants to survive the night.\n";
    cout << "3. Back away slowly and keep walking through the trees.\n\n";

    int choice;
    cout << "Enter your choice (1, 2, or 3): ";
    cin >> choice;

    if (choice == 1) {
        scene_dwarves();
    }
    else if (choice == 2) {
        scene_apple();
    }
    else {
        scene_deeper_woods();
    }
}

// ============================================================
// SCENE 4: The Beast in the Bramble
// ============================================================

void scene_beast() {

    cout << "\nYou push through the thorns and find not a monster, but a\n";
    cout << "massive gray wolf, tangled in an iron snare, whimpering.\n";
    cout << "As you kneel to help, its eyes flash a very human, very\n";
    cout << "familiar shade of green.\n\n";

    cout << "\"You're the Huntsman,\" you whisper, stunned. \"She cursed you\n";
    cout << "too, didn't she? For sparing me.\"\n";
    cout << "The wolf nods, once, and gestures with its snout deeper into\n";
    cout << "the woods -- toward a camp of little lights flickering like fireflies.\n\n";

    cout << "What do you do?\n";
    cout << "1. Free him and let him guide you to the dwarves' hidden camp.\n";
    cout << "2. This is too much. Bolt into the deeper darkness alone.\n\n";

    int choice;
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    if (choice == 1) {
        scene_dwarves();
    }
    else {
        scene_deeper_woods();
    }
}

// ============================================================
// SCENE 5: The Deeper Woods
// ============================================================

void scene_deeper_woods() {

    cout << "\nThe trees thin into a clearing choked with black thorn vines,\n";
    cout << "all of them curving toward a single point like a compass needle.\n";
    cout << "Shapes move at the tree line -- the Queen's shadow-wraiths,\n";
    cout << "stitched together from smoke and old nightmares, sniffing the air.\n\n";

    cout << "Past them, buried in a rotted stump, something glints like glass.\n\n";

    cout << "What do you do?\n";
    cout << "1. Charge straight at the shadow-wraiths and hope courage counts for something.\n";
    cout << "2. Drop flat and crawl through the thorns toward that glinting light.\n\n";

    int choice;
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    if (choice == 1) {
        scene_ending_captured();
    }
    else {
        scene_mirror_clearing();
    }
}

// ============================================================
// SCENE 6: The Rogue Dwarves' Camp
// ============================================================

void scene_dwarves() {

    cout << "\nSeven dwarves, all former royal blacksmiths turned forest\n";
    cout << "outlaws, surround you at a fire that burns an unsettling shade\n";
    cout << "of blue. Their leader, a one-eyed dwarf named Grumbleaxe, spits\n";
    cout << "into the flames.\n\n";

    cout << "\"So the Queen's little stepdaughter finally shows up,\" he growls.\n";
    cout << "\"We've been forging a blade meant to kill mirrors for TEN YEARS.\n";
    cout << "You in, or are you just here to eat our stew?\"\n\n";

    cout << "What do you do?\n";
    cout << "1. Train through the night and take up the mirror-slaying blade.\n";
    cout << "2. Drink the glowing potion they offer -- \"liquid truth,\" they call it.\n";
    cout << "3. Slip away at midnight. You work alone.\n\n";

    int choice;
    cout << "Enter your choice (1, 2, or 3): ";
    cin >> choice;

    if (choice == 1) {
        scene_final_stand();
    }
    else if (choice == 2) {
        scene_mirror_clearing();
    }
    else {
        scene_apple();
    }
}

// ============================================================
// SCENE 7: The Apple
// ============================================================

void scene_apple() {

    cout << "\nAn old peddler woman melts out of the fog, hunched over a\n";
    cout << "basket of apples so red they look wet. Her smile is too wide,\n";
    cout << "her eyes too familiar -- one of them flickers gold for just a\n";
    cout << "heartbeat, exactly like your stepmother's.\n\n";

    cout << "\"One bite,\" she rasps, \"and every question you've ever had\n";
    cout << "will finally be answered, dearie.\"\n\n";

    cout << "What do you do?\n";
    cout << "1. Take the apple. You have to know the truth, whatever it costs.\n";
    cout << "2. Knock the basket from her hands and fight your way past her.\n\n";

    int choice;
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    if (choice == 1) {
        scene_ending_cursed_sleep();
    }
    else {
        scene_final_stand();
    }
}

// ============================================================
// SCENE 8: The Mirror in the Stump
// ============================================================

void scene_mirror_clearing() {

    cout << "\nThe glinting shard turns out to be an entire mirror, ancient\n";
    cout << "and obsidian-black, half swallowed by the rotted stump like the\n";
    cout << "forest itself grew around it to keep it contained. Its surface\n";
    cout << "ripples like water, and a voice pours out of it, honey-sweet\n";
    cout << "and older than the kingdom.\n\n";

    cout << "\"Hello, little heir,\" it purrs. \"I made your stepmother 'fairest\n";
    cout << "of them all.' I can make you something so much greater.\"\n\n";

    cout << "What do you do?\n";
    cout << "1. Smash the cursed thing to pieces with a rock, right now.\n";
    cout << "2. Demand it tell you the truth about the Queen -- then march to the castle.\n";
    cout << "3. Pocket a single shard as a weapon and use its own magic against it.\n\n";

    int choice;
    cout << "Enter your choice (1, 2, or 3): ";
    cin >> choice;

    if (choice == 1) {
        scene_ending_shatter();
    }
    else if (choice == 2) {
        scene_final_stand();
    }
    else {
        scene_ending_redeemed();
    }
}

// ============================================================
// SCENE 9: The Final Stand
// ============================================================

void scene_final_stand() {

    cout << "\nThe castle throne room. Candles gutter sideways in a wind that\n";
    cout << "isn't there. The Evil Queen rises from her throne, and behind\n";
    cout << "her, mounted on the wall, the Mirror's black glass watches you\n";
    cout << "both like a spider watching two flies argue in its web.\n\n";

    cout << "\"There you are,\" the Queen breathes, raising a hand crackling\n";
    cout << "with borrowed magic. \"Fairest of them all was never a title.\n";
    cout << "It was a SENTENCE.\"\n\n";

    cout << "What do you do?\n";
    cout << "1. Draw the dwarves' mirror-slaying blade and strike at the Queen.\n";
    cout << "2. Shout the Mirror's own secret at her: it has been lying to her for a thousand years.\n";
    cout << "3. Your nerve breaks. Turn and run for the crumbling castle gate.\n\n";

    int choice;
    cout << "Enter your choice (1, 2, or 3): ";
    cin >> choice;

    if (choice == 1) {
        scene_ending_good();
    }
    else if (choice == 2) {
        scene_ending_redeemed();
    }
    else {
        scene_ending_bad();
    }
}

// ============================================================
// ENDING: The Triumphant Ending
// ============================================================

void scene_ending_good() {

    cout << "\n============================================\n";
    cout << "         ENDING: FAIREST OF THEM ALL\n";
    cout << "============================================\n\n";

    cout << "The mirror-slaying blade finds its mark, and the Queen's stolen\n";
    cout << "magic shatters into a thousand falling stars. The obsidian\n";
    cout << "mirror on the wall SCREAMS a sound like breaking glass played\n";
    cout << "backward, and crumbles to black sand.\n\n";

    cout << "The forest exhales. The wraiths dissolve into ordinary mist.\n";
    cout << "Grumbleaxe and his dwarves march in through the gate just in\n";
    cout << "time to see Snow White standing alone on the throne room floor,\n";
    cout << "utterly, gloriously unafraid. The kingdom crowns her that very\n";
    cout << "night. *** THE END ***\n";
}

// ============================================================
// ENDING: The Redemption Ending
// ============================================================

void scene_ending_redeemed() {

    cout << "\n============================================\n";
    cout << "          ENDING: THE MIRROR CRACKS\n";
    cout << "============================================\n\n";

    cout << "\"It's the Mirror,\" you shout. \"It's been whispering poison into\n";
    cout << "your ear since before I was born! You were never the monster --\n";
    cout << "you were just its favorite puppet!\"\n\n";

    cout << "For one impossible second, the gold drains out of the Queen's\n";
    cout << "eyes and something achingly human looks back at you. Together\n";
    cout << "you turn on the Mirror, and it howls as its thousand-year\n";
    cout << "puppet show finally, finally ends.\n\n";

    cout << "The Queen collapses into your arms, weeping, remembering her\n";
    cout << "own name for the first time in decades. Stepmother and\n";
    cout << "stepdaughter walk out of that castle side by side, into a\n";
    cout << "sunrise neither of them expected to see. *** THE END ***\n";
}

// ============================================================
// ENDING: The Grim Ending
// ============================================================

void scene_ending_bad() {

    cout << "\n============================================\n";
    cout << "              ENDING: GAME OVER\n";
    cout << "============================================\n\n";

    cout << "You turn to run, and the Mirror LAUGHS -- a sound like a\n";
    cout << "thousand voices agreeing on the worst possible idea. Vines\n";
    cout << "made of black glass erupt from the floor and wrap around your\n";
    cout << "ankles before you take a second step.\n\n";

    cout << "The Queen smiles, and for the first time you notice her eyes\n";
    cout << "have gone fully gold, mirror-gold, mirror-forever.\n";
    cout << "\"Fairest of them all,\" she whispers, \"was never a compliment.\"\n";
    cout << "*** GAME OVER ***\n";
}

// ============================================================
// ENDING: The Poisoned Sleep
// ============================================================

void scene_ending_cursed_sleep() {

    cout << "\n============================================\n";
    cout << "            ENDING: THE LONG SLEEP\n";
    cout << "============================================\n\n";

    cout << "The apple is sweeter than anything you've ever tasted, right\n";
    cout << "up until it isn't. The forest tilts sideways. The old woman's\n";
    cout << "laughter turns into the Queen's laughter turns into the\n";
    cout << "Mirror's laughter, all three the exact same sound.\n\n";

    cout << "You fall into a glass coffin of frost that forms around you\n";
    cout << "before you even hit the ground, your last thought a single\n";
    cout << "question you never got answered. Somewhere far off, a wolf\n";
    cout << "howls once, mournfully, and then the forest goes silent.\n";
    cout << "*** GAME OVER ***\n";
}

// ============================================================
// ENDING: Captured by the Wraiths
// ============================================================

void scene_ending_captured() {

    cout << "\n============================================\n";
    cout << "           ENDING: SWALLOWED BY SHADOW\n";
    cout << "============================================\n\n";

    cout << "Courage is not the same thing as a plan. The shadow-wraiths\n";
    cout << "part like smoke around your charge, then close back in from\n";
    cout << "every direction at once, cold and weightless and endless.\n\n";

    cout << "The last thing you see is the obsidian mirror in the distant\n";
    cout << "stump, flickering once, satisfied, like it just won a bet with\n";
    cout << "itself. *** GAME OVER ***\n";
}

// ============================================================
// ENDING: The Mirror Shattered, Reality Did Not Survive
// ============================================================

void scene_ending_shatter() {

    cout << "\n============================================\n";
    cout << "        ENDING: WHAT THE MIRROR REMEMBERED\n";
    cout << "============================================\n\n";

    cout << "The rock connects. The mirror doesn't just break -- it\n";
    cout << "UNRAVELS, and every reflection it has ever swallowed comes\n";
    cout << "pouring back out at once: a thousand queens, a thousand\n";
    cout << "huntsmen, a thousand versions of you that made every choice\n";
    cout << "you didn't.\n\n";

    cout << "When the light fades, the forest is gone. So is the castle.\n";
    cout << "You're standing in a quiet meadow you don't recognize, and for\n";
    cout << "one strange, floating moment, you're not entirely sure which\n";
    cout << "Snow White you actually are.\n";
    cout << "*** THE END? ***\n";
}
