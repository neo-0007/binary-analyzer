
ulong FUN_006ce010(long param_1,long param_2,long param_3)

{
  byte bVar1;
  ushort uVar2;
  ulong uVar3;
  byte bVar4;
  undefined8 uVar5;
  ulong local_28;
  ulong local_20;
  
  uVar2 = *(ushort *)(param_1 + 0x20) >> 3;
  bVar1 = (byte)uVar2;
  if (bVar1 != 0xff) {
    bVar4 = bVar1 & 0x70;
    if (bVar4 == 0x20) {
      uVar5 = *(undefined8 *)(param_1 + 8);
      goto LAB_006ce048;
    }
    if (bVar4 < 0x21) {
      if ((uVar2 & 0x60) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00404713();
      }
    }
    else {
      if (bVar4 == 0x30) {
        uVar5 = *(undefined8 *)(param_1 + 0x10);
        goto LAB_006ce048;
      }
      if (bVar4 != 0x50) {
        uVar3 = FUN_004046d1();
        return uVar3;
      }
    }
  }
  uVar5 = 0;
LAB_006ce048:
  FUN_006cdb90(bVar1,uVar5,param_2 + 8,&local_28);
  FUN_006cdb90(bVar1,uVar5,param_3 + 8,&local_20);
  uVar3 = 1;
  if (local_28 <= local_20) {
    uVar3 = (ulong)-(uint)(local_28 < local_20);
  }
  return uVar3;
}

