
undefined8 FUN_00623600(long param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  bVar1 = *(byte *)(param_1 + 0x28);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (bVar1 == 0xff) {
    lVar4 = 0;
  }
  else {
    bVar2 = bVar1 & 7;
    if (bVar2 == 2) {
      lVar4 = param_2 * -2;
    }
    else {
      if (bVar2 < 3) {
        if (bVar2 != 0) {
          uVar3 = FUN_00402248();
          return uVar3;
        }
      }
      else {
        lVar4 = param_2 * -4;
        if (bVar2 == 3) goto LAB_0062363e;
        if (bVar2 != 4) {
          uVar3 = FUN_00402248();
          return uVar3;
        }
      }
      lVar4 = param_2 * -8;
    }
  }
LAB_0062363e:
  FUN_006234b0(bVar1,*(undefined8 *)(param_1 + 0x10),lVar4 + *(long *)(param_1 + 0x18),&local_18);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

