
undefined8
FUN_00613600(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = FUN_0049f870(&local_48,*param_2);
  if ((iVar1 == 0) || (local_48 == 0x7fffffffffffffff)) {
    FUN_004ae9e0(param_3,"%*sVersion: <unsupported>",param_4,&DAT_0083e5c2);
  }
  else {
    FUN_004ae9e0(param_3,"%*sVersion: %ld (0x%lX)",param_4,&DAT_0083e5c2,local_48 + 1);
  }
  iVar1 = 0;
  while( true ) {
    iVar2 = FUN_00436480(param_2[1]);
    if (iVar2 <= iVar1) break;
    puVar3 = (undefined8 *)FUN_004364a0(param_2[1],iVar1);
    uVar4 = FUN_0059cfa0(0,*puVar3);
    FUN_004ae9e0(param_3,"\n%*sZone: %s, User: ",param_4,&DAT_0083e5c2,uVar4);
    FUN_0041ad60(uVar4,"../crypto/x509/v3_sxnet.c",0x52);
    FUN_005b55e0(param_3,puVar3[1]);
    iVar1 = iVar1 + 1;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

