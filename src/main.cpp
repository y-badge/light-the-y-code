void test_all_features();
void led_activity();
void delay_activity();
void sound_activity();
void variables_activity();
void loop_activity();
void conditionals_activity();
void badge_activity();
void temperature_activity();
void accelerometer_activity();

int main() {
    // This function should call ONE of the functions below.
    // Uncomment or comment the lines so that just the function
    // you want to call is uncommented.

    test_all_features();
    // led_activity();
    // delay_activity();
    // sound_activity();
    // variables_activity();
    // loop_activity();
    // conditionals_activity();

    /* !!!! NOTE: These modules can be only done with the v3 boards !!!! */
    // temperature_activity();
    // accelerometer_activity();

    // badge_activity();

    while (1)
        ;
}
