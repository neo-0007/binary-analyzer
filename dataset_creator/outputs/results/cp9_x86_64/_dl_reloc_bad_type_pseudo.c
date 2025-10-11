
void _dl_reloc_bad_type(long param_1,uint param_2,int param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  char *pcVar3;
  char acStack_48 [48];
  
  pcVar2 = stpcpy(acStack_48,"unexpected reloc type 0x" + (long)param_3 * 0x26);
  pcVar3 = pcVar2;
  if (0xff < param_2) {
    pcVar3 = pcVar2 + 6;
    *pcVar2 = "0123456789abcdefghijklmnopqrstuvwxyz"[param_2 >> 0x1c];
    pcVar2[1] = "0123456789abcdefghijklmnopqrstuvwxyz"[param_2 >> 0x18 & 0xf];
    pcVar2[2] = "0123456789abcdefghijklmnopqrstuvwxyz"[param_2 >> 0x14 & 0xf];
    pcVar2[3] = "0123456789abcdefghijklmnopqrstuvwxyz"[param_2 >> 0x10 & 0xf];
    pcVar2[4] = "0123456789abcdefghijklmnopqrstuvwxyz"[param_2 >> 0xc & 0xf];
    pcVar2[5] = "0123456789abcdefghijklmnopqrstuvwxyz"[param_2 >> 8 & 0xf];
  }
  pcVar3[2] = '\0';
  uVar1 = *(undefined8 *)(param_1 + 8);
  *pcVar3 = "0123456789abcdefghijklmnopqrstuvwxyz"[param_2 >> 4 & 0xf];
  pcVar3[1] = "0123456789abcdefghijklmnopqrstuvwxyz"[param_2 & 0xf];
                    /* WARNING: Subroutine does not return */
  _dl_signal_error(0,uVar1,0,acStack_48);
}

