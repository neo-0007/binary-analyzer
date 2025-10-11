
void FUN_0076d630(int param_1)

{
  long lVar1;
  char *pcVar2;
  
  if (param_1 == -9) {
    lVar1 = 0;
  }
  else if (param_1 == -3) {
    lVar1 = 1;
  }
  else if (param_1 == -1) {
    lVar1 = 2;
  }
  else if (param_1 == -4) {
    lVar1 = 3;
  }
  else if (param_1 == -6) {
    lVar1 = 4;
  }
  else if (param_1 == -10) {
    lVar1 = 5;
  }
  else if (param_1 == -5) {
    lVar1 = 6;
  }
  else if (param_1 == -2) {
    lVar1 = 7;
  }
  else if (param_1 == -8) {
    lVar1 = 8;
  }
  else if (param_1 == -7) {
    lVar1 = 9;
  }
  else if (param_1 == -0xb) {
    lVar1 = 10;
  }
  else if (param_1 == -100) {
    lVar1 = 0xb;
  }
  else if (param_1 == -0x65) {
    lVar1 = 0xc;
  }
  else if (param_1 == -0x66) {
    lVar1 = 0xd;
  }
  else if (param_1 == -0x67) {
    lVar1 = 0xe;
  }
  else if (param_1 == -0x68) {
    lVar1 = 0xf;
  }
  else {
    pcVar2 = "Unknown error";
    lVar1 = 0x10;
    if (param_1 != -0x69) goto LAB_0076d6d1;
  }
  pcVar2 = "Address family for hostname not supported" + (ushort)(&DAT_0082d8c2)[lVar1 * 2];
LAB_0076d6d1:
  FUN_006e27f0(&DAT_0083ed80,pcVar2,5);
  return;
}

