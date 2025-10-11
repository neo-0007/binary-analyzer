
void FUN_007ccea0(void)

{
  long lVar1;
  
  DAT_00946918 = 1;
  if (DAT_00946910 != 0) {
    do {
      lVar1 = DAT_00946910;
      FUN_007104f0(*(undefined8 *)(DAT_00946910 + 0xb0));
      DAT_00946910 = *(long *)(lVar1 + 0xa8);
    } while (DAT_00946910 != 0);
  }
  return;
}

