// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define MIRYOKU_ALPHAS_COLEMAK

// Override Base layer to use bilateral HRMs (urob preset).
// GACS modifier order preserved: GUI ALT CTRL SHIFT (pinky->index).
#define MIRYOKU_LAYER_BASE \
&kp Q,                &kp W,                &kp F,                &kp P,                &kp G,                &kp J,                &kp L,                &kp U,                &kp Y,                &kp SQT,              \
&u_mt_l LGUI A,       &u_mt_l LALT R,       &u_mt_l LCTRL S,      &u_mt_l LSHFT T,      &kp D,                &kp H,                &u_mt_r LSHFT N,      &u_mt_r LCTRL E,      &u_mt_r LALT I,       &u_mt_r LGUI O,       \
U_LT(U_BUTTON, Z),    &u_mt_l RALT X,       &kp C,                &kp V,                &kp B,                &kp K,                &kp M,                &kp COMMA,            &u_mt_r RALT DOT,     U_LT(U_BUTTON, SLASH),\
U_NP,                 U_NP,                 U_LT(U_MEDIA, ESC),   U_LT(U_NAV, SPACE),   U_LT(U_MOUSE, TAB),   U_LT(U_SYM, RET),     U_LT(U_NUM, BSPC),    U_LT(U_FUN, DEL),     U_NP,                 U_NP
