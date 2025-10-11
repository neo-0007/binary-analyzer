
void FUN_00778ac0(void)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long in_FS_OFFSET;
  
  lVar3 = *(long *)(in_FS_OFFSET + -0x10);
  *(undefined8 *)(in_FS_OFFSET + -0x10) = 0;
  if (lVar3 != 0) {
    uVar1 = *(undefined4 *)(in_FS_OFFSET + -0x58);
    do {
      lVar2 = *(long *)(lVar3 + 0x20);
      *(long *)(in_FS_OFFSET + -0x10) = lVar2;
      FUN_007af9e0(*(undefined8 *)(lVar3 + 8));
      FUN_007104f0(lVar3);
      *(undefined4 *)(in_FS_OFFSET + -0x58) = uVar1;
      lVar3 = lVar2;
    } while (lVar2 != 0);
  }
  return;
}

