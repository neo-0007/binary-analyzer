
char * _itoa_word(ulong param_1,char *param_2,uint param_3,int param_4)

{
  ulong uVar1;
  char *pcVar2;
  bool bVar3;
  
  pcVar2 = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  if (param_4 == 0) {
    pcVar2 = "0123456789abcdefghijklmnopqrstuvwxyz";
  }
  if (param_3 == 10) {
    do {
      param_2 = param_2 + -1;
      *param_2 = pcVar2[param_1 % 10];
      bVar3 = 9 < param_1;
      param_1 = param_1 / 10;
    } while (bVar3);
    return param_2;
  }
  if (param_3 == 0x10) {
    do {
      param_2 = param_2 + -1;
      *param_2 = pcVar2[(uint)param_1 & 0xf];
      bVar3 = 0xf < param_1;
      param_1 = param_1 >> 4;
    } while (bVar3);
  }
  else {
    uVar1 = (ulong)param_3;
    if (param_3 == 8) {
      do {
        param_2 = param_2 + -1;
        *param_2 = pcVar2[(uint)param_1 & 7];
        bVar3 = 7 < param_1;
        param_1 = param_1 >> 3;
      } while (bVar3);
    }
    else {
      do {
        param_2 = param_2 + -1;
        *param_2 = pcVar2[param_1 % uVar1];
        bVar3 = uVar1 <= param_1;
        param_1 = param_1 / uVar1;
      } while (bVar3);
    }
  }
  return param_2;
}

