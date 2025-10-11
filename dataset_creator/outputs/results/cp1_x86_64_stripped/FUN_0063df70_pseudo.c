
bool FUN_0063df70(long param_1,ushort param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  
  lVar2 = 0;
  if (*(ushort *)(param_1 + 0x4a6) == param_2) {
    iVar1 = FUN_00771b10(param_3,*(undefined8 *)(param_1 + 0x4e8),*(undefined8 *)(param_1 + 0x10));
    return iVar1 != 0;
  }
  do {
    if ((param_2 & *(ushort *)(param_1 + 0x49c + lVar2 * 2)) != 0) {
      iVar1 = FUN_00771b10(param_3,*(undefined8 *)(param_1 + 0x4c0 + lVar2 * 8),
                           *(undefined8 *)(param_1 + 0x10));
      if (iVar1 != 0) {
        return true;
      }
      if (*(ushort *)(param_1 + 0x49c + lVar2 * 2) == param_2) {
        return false;
      }
    }
    lVar2 = lVar2 + 1;
    if (lVar2 == 0xc) {
      return false;
    }
  } while( true );
}

