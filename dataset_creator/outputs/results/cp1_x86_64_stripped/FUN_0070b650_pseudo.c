
undefined8 FUN_0070b650(uint param_1,uint *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  
  uVar2 = 0x16;
  if (param_1 < 2) {
    lVar1 = *(long *)(in_FS_OFFSET + 0x10);
    if (param_2 != (uint *)0x0) {
      *param_2 = (uint)*(byte *)(lVar1 + 0x971);
    }
    *(char *)(lVar1 + 0x971) = (char)param_1;
    uVar2 = 0;
  }
  return uVar2;
}

