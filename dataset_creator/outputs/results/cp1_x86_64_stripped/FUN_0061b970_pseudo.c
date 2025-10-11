
bool FUN_0061b970(long param_1,undefined8 *param_2,undefined8 param_3)

{
  byte *pbVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  
  pbVar1 = (byte *)*param_2;
  if (((*(byte *)(param_1 + 0x19) & 4) == 0) && ((*pbVar1 & 3) != 0)) {
    iVar4 = 0;
    while( true ) {
      iVar2 = FUN_00436480(*(undefined8 *)(pbVar1 + 0x18));
      if (iVar2 <= iVar4) {
        return false;
      }
      uVar3 = FUN_004364a0(*(undefined8 *)(pbVar1 + 0x18),iVar4);
      iVar2 = FUN_00424ba0(uVar3,param_3);
      if (iVar2 == 0) break;
      iVar4 = iVar4 + 1;
    }
    return true;
  }
  iVar4 = FUN_00424ba0(*(undefined8 *)(pbVar1 + 8),param_3);
  return iVar4 == 0;
}

