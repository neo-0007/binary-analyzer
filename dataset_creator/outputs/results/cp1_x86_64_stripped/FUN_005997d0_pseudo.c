
void FUN_005997d0(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  
  if (param_2 != 0) {
    iVar4 = 0;
    iVar1 = FUN_00436480(param_2);
    if (0 < iVar1) {
      do {
        iVar1 = FUN_00436480(param_2);
        if (iVar1 <= iVar4) {
          return;
        }
        lVar2 = FUN_004364a0(param_2,iVar4);
        if (lVar2 != 0) {
          iVar1 = FUN_00599650(param_1,lVar2,0);
          if (iVar1 == 0) {
            return;
          }
          uVar3 = FUN_005a1bc0(lVar2);
          iVar1 = FUN_0059a030(param_1,0,uVar3,0x2000,8);
          if (iVar1 == 0) {
            return;
          }
        }
        iVar4 = iVar4 + 1;
      } while( true );
    }
  }
  FUN_004ae9e0(param_1,"    (no certificates)\n");
  return;
}

