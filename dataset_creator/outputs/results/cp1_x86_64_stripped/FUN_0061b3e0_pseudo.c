
undefined8 FUN_0061b3e0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  
  iVar1 = FUN_004ae9e0(param_3,"%*sIssuer: ",param_4,&DAT_0083e5c2);
  if ((0 < iVar1) &&
     (iVar1 = FUN_005b7150(param_3,*param_2,0,"mIcSt11char_traitsIcESaIcEEE"), 0 < iVar1)) {
    iVar1 = 0;
    while( true ) {
      iVar2 = FUN_00436480(param_2[1]);
      if (iVar2 <= iVar1) {
        return 1;
      }
      puVar3 = (undefined8 *)FUN_004364a0(param_2[1],iVar1);
      iVar2 = FUN_004ae9e0(param_3,"\n%*s",param_4 * 2,&DAT_0083e5c2);
      if ((((iVar2 < 1) || (iVar2 = FUN_004a0450(param_3,*puVar3), iVar2 < 1)) ||
          (iVar2 = FUN_004ab870(param_3,&DAT_007e8a4c), iVar2 < 1)) ||
         (iVar2 = FUN_00612440(param_3,puVar3[1]), iVar2 < 1)) break;
      iVar1 = iVar1 + 1;
    }
  }
  return 0;
}

