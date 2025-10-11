
undefined8
FUN_004aae30(undefined8 param_1,undefined4 param_2,int param_3,undefined1 *param_4,int param_5)

{
  int iVar1;
  undefined1 *puVar2;
  
  if (0 < param_5) {
    if (param_5 != 1) {
      iVar1 = 0;
      puVar2 = param_4;
      do {
        FUN_004ae9e0(param_1,"%02X:",*puVar2);
        iVar1 = (iVar1 + 1) % param_3;
        if (iVar1 == 0) {
          FUN_004ae9e0(param_1,&DAT_008243ea);
          if (param_4 + (param_5 - 2) == puVar2) {
            FUN_004ae9e0(param_1,"%*s",param_2,&DAT_0083e5c2);
            break;
          }
          FUN_004ae9e0(param_1,"%*s",param_2,&DAT_0083e5c2);
        }
        else if (param_4 + (param_5 - 2) == puVar2) break;
        puVar2 = puVar2 + 1;
      } while( true );
    }
    FUN_004ae9e0(param_1,&DAT_0081d195,param_4[(long)param_5 + -1]);
  }
  return 1;
}

