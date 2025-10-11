
void FUN_007858e0(long param_1)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 in_R8;
  undefined8 in_R9;
  long local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  
  *(undefined1 *)(param_1 + 0x2d) = 0;
  FUN_0070a340(&DAT_0093ea60);
  uVar2 = FUN_0078db70(&local_48,FUN_00785f50,param_1);
  FUN_0070abb0(&DAT_0093ea60);
  if (CONCAT44(uStack_3c,local_40) != 0) {
    puVar4 = (undefined8 *)(ulong)uVar2;
    uVar3 = FUN_0078dac0(puVar4,&local_48,0);
                    /* WARNING: Subroutine does not return */
    FUN_0078db10(0xc,*puVar4,0,"cannot extend global scope",in_R8,in_R9,uVar3);
  }
  if (*(char *)(param_1 + 0x2d) != '\0') {
    uVar2 = *(uint *)(param_1 + 8);
    lVar1 = *(long *)(param_1 + 0x18);
    local_40 = *(undefined4 *)(param_1 + 0x30);
    local_38 = *(undefined8 *)(param_1 + 0x38);
    uStack_30 = *(undefined8 *)(param_1 + 0x40);
    local_48 = lVar1;
    FUN_0078db70(0,&DAT_007858c0,&local_48);
    if ((uVar2 & 0x100) != 0) {
      FUN_00785780(lVar1);
    }
    if (((byte)DAT_0094b0e4 & 0x40) != 0) {
      FUN_00787060("opening file=%s [%lu]; direct_opencount=%u\n\n",*(undefined8 *)(lVar1 + 8),
                   *(undefined8 *)(lVar1 + 0x30),*(undefined4 *)(lVar1 + 0x318));
      return;
    }
  }
  return;
}

