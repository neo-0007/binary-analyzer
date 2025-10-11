
bool FUN_0042a6f0(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long in_FS_OFFSET;
  bool bVar7;
  long local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  lVar4 = FUN_00436410();
  lVar5 = FUN_00436410();
  lVar6 = FUN_00436410();
  if ((((param_1 != 0) && (lVar4 != 0)) && (lVar5 != 0)) && (lVar6 != 0)) {
    FUN_0042c390(param_1,&local_50,&local_48,&local_58);
    FUN_0042c920(param_1,lVar4,lVar5,lVar6);
    iVar1 = FUN_00548c90(param_2,param_3,"n",local_50);
    if (iVar1 != 0) {
      iVar1 = FUN_00548c90(param_2,param_3,&DAT_007d4faa,local_48);
      if (iVar1 != 0) {
        bVar7 = true;
        if ((param_4 == 0) || (local_58 == 0)) goto LAB_0042a7b2;
        iVar1 = FUN_00436480(lVar4);
        iVar2 = FUN_00436480(lVar5);
        iVar3 = FUN_00436480(lVar6);
        if ((iVar1 == 0) || ((1 < iVar1 && 1 < iVar2 && (0 < iVar3)))) {
          iVar1 = FUN_00548c90(param_2,param_3,"d",local_58);
          if (iVar1 != 0) {
            iVar1 = FUN_00548ce0(param_2,param_3,&PTR_s_rsa_factor1_0093b300,lVar4);
            if (iVar1 != 0) {
              iVar1 = FUN_00548ce0(param_2,param_3,&PTR_s_rsa_exponent1_0093b2a0,lVar5);
              if (iVar1 != 0) {
                iVar1 = FUN_00548ce0(param_2,param_3,&PTR_s_rsa_coefficient1_0093b240,lVar6);
                bVar7 = iVar1 != 0;
                goto LAB_0042a7b2;
              }
            }
          }
        }
      }
    }
  }
  bVar7 = false;
LAB_0042a7b2:
  FUN_004360b0(lVar4);
  FUN_004360b0(lVar5);
  FUN_004360b0(lVar6);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

