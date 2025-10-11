
ulong FUN_006ce0c0(long param_1,long param_2,long param_3)

{
  byte bVar1;
  ulong uVar2;
  byte bVar3;
  undefined8 uVar4;
  ulong local_28;
  ulong local_20;
  
  bVar1 = FUN_006cdce0((param_2 + 4) - (long)*(int *)(param_2 + 4));
  if (bVar1 == 0xff) {
LAB_006ce19d:
    uVar4 = 0;
  }
  else {
    bVar3 = bVar1 & 0x70;
    if (bVar3 != 0x20) {
      if (bVar3 < 0x21) {
        if ((bVar1 & 0x60) != 0) goto code_r0x004046d6;
      }
      else {
        if (bVar3 == 0x30) {
          uVar4 = *(undefined8 *)(param_1 + 0x10);
          goto LAB_006ce120;
        }
        if (bVar3 != 0x50) {
          uVar2 = FUN_004046d6(bVar1);
          return uVar2;
        }
      }
      goto LAB_006ce19d;
    }
    uVar4 = *(undefined8 *)(param_1 + 8);
  }
LAB_006ce120:
  FUN_006cdb90(bVar1,uVar4,param_2 + 8,&local_28);
  bVar1 = FUN_006cdce0((param_3 + 4) - (long)*(int *)(param_3 + 4));
  if (bVar1 != 0xff) {
    bVar3 = bVar1 & 0x70;
    if (bVar3 == 0x20) {
      uVar4 = *(undefined8 *)(param_1 + 8);
      goto LAB_006ce160;
    }
    if (bVar3 < 0x21) {
      if ((bVar1 & 0x60) != 0) {
code_r0x004046d6:
                    /* WARNING: Subroutine does not return */
        FUN_00404713(bVar1);
      }
    }
    else {
      if (bVar3 == 0x30) {
        uVar4 = *(undefined8 *)(param_1 + 0x10);
        goto LAB_006ce160;
      }
      if (bVar3 != 0x50) {
        uVar2 = FUN_004046d6();
        return uVar2;
      }
    }
  }
  uVar4 = 0;
LAB_006ce160:
  FUN_006cdb90(bVar1,uVar4,param_3 + 8,&local_20);
  uVar2 = 1;
  if (local_28 <= local_20) {
    uVar2 = (ulong)-(uint)(local_28 < local_20);
  }
  return uVar2;
}

