
ulong FUN_00770690(void)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = FUN_00770230();
  if ((int)uVar2 == 0) {
    uVar2 = FUN_00770420();
    if ((int)uVar2 == 0) {
      uVar1 = FUN_00770610();
      uVar2 = (ulong)uVar1;
      if (uVar1 == 0) {
        uVar2 = 2;
      }
      return uVar2;
    }
  }
  return uVar2;
}

