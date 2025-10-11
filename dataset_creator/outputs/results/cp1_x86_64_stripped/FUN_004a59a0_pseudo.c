
ulong FUN_004a59a0(long *param_1,long param_2,char *param_3,int param_4,uint param_5)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long in_FS_OFFSET;
  long local_60;
  code *local_58;
  int local_50;
  uint local_44;
  long local_40;
  
  lVar8 = *(long *)(param_3 + 0x20);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_3 == '\0') {
    if (lVar8 != 0) {
LAB_004a59f7:
      if ((*(byte *)(lVar8 + 8) & 8) == 0) {
        local_58 = *(code **)(lVar8 + 0x18);
      }
      else {
        local_58 = *(code **)(lVar8 + 0x28);
      }
      goto LAB_004a5a06;
    }
switchD_004a5a1c_caseD_0:
    lVar8 = *(long *)(param_3 + 0x10);
    if (lVar8 == 0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
LAB_004a5bdf:
        uVar4 = FUN_004a5810(param_1,param_2,param_3,param_4,param_5);
        return uVar4;
      }
    }
    else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
LAB_004a5a54:
      uVar4 = FUN_004a6010(param_1,param_2,lVar8,param_4,param_5);
      return uVar4;
    }
    goto LAB_004a5ebd;
  }
  if (*param_1 == 0) goto switchD_004a5a1c_caseD_3;
  local_58 = (code *)0x0;
  if (lVar8 != 0) goto LAB_004a59f7;
LAB_004a5a06:
  switch(*param_3) {
  case '\0':
    goto switchD_004a5a1c_caseD_0;
  case '\x01':
    cVar1 = '\x01';
    goto LAB_004a5a8f;
  case '\x02':
    if (param_4 != -1) {
      FUN_0051f420();
      uVar6 = 0x7d;
      goto LAB_004a5d31;
    }
    if (local_58 == (code *)0x0) {
      iVar2 = FUN_004a8290(param_1,param_3);
      if ((-1 < iVar2) && (lVar8 = (long)iVar2, lVar8 < *(long *)(param_3 + 0x18))) {
LAB_004a5c88:
        lVar8 = *(long *)(param_3 + 0x10) + lVar8 * 0x28;
        param_1 = (long *)FUN_004a85f0(param_1,lVar8);
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          param_4 = -1;
          goto LAB_004a5a54;
        }
        goto LAB_004a5ebd;
      }
      goto switchD_004a5a1c_caseD_3;
    }
    iVar2 = (*local_58)(6,param_1,param_3,0);
    if (iVar2 == 0) goto switchD_004a5a1c_caseD_3;
    iVar2 = FUN_004a8290(param_1,param_3);
    if ((-1 < iVar2) && (lVar8 = (long)iVar2, lVar8 < *(long *)(param_3 + 0x18))) goto LAB_004a5c88;
    (*local_58)(7,param_1,param_3,0);
    uVar4 = 0;
    break;
  default:
    goto switchD_004a5a1c_caseD_3;
  case '\x04':
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x004a5c36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(lVar8 + 0x28))(param_1,param_2,param_3,param_4,param_5);
      return uVar4;
    }
    goto LAB_004a5ebd;
  case '\x05':
    if (param_4 == -1) {
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_004a5ebd;
      param_4 = -1;
      goto LAB_004a5bdf;
    }
    FUN_0051f420();
    uVar6 = 0x72;
LAB_004a5d31:
    FUN_0051f540("../crypto/asn1/tasn_enc.c",uVar6,"ASN1_item_ex_i2d");
    FUN_0051f8f0(0xd,0xe6,0);
LAB_004a5d50:
    uVar4 = 0xffffffff;
    break;
  case '\x06':
    cVar1 = ((param_5 & 0x800) != 0) + '\x01';
LAB_004a5a8f:
    iVar2 = FUN_004a8550(&local_44,param_2,param_1,param_3);
    if (iVar2 < 0) {
switchD_004a5a1c_caseD_3:
      uVar4 = 0;
    }
    else {
      uVar4 = (ulong)local_44;
      if (iVar2 == 0) {
        local_44 = 0;
        local_50 = param_4;
        if (param_4 == -1) {
          local_50 = 0x10;
          param_5 = param_5 & 0xffffff3f;
        }
        if ((local_58 != (code *)0x0) && (iVar2 = (*local_58)(6,param_1,param_3,0), iVar2 == 0))
        goto switchD_004a5a1c_caseD_3;
        lVar7 = 0;
        lVar8 = *(long *)(param_3 + 0x10);
        if (0 < *(long *)(param_3 + 0x18)) {
          do {
            lVar5 = FUN_004a8600(*param_1,lVar8,1);
            if (lVar5 == 0) goto switchD_004a5a1c_caseD_3;
            uVar6 = FUN_004a85f0(param_1,lVar5);
            uVar3 = FUN_004a6010(uVar6,0,lVar5,0xffffffff,param_5);
            uVar4 = (ulong)uVar3;
            if (uVar3 == 0xffffffff) goto LAB_004a5b8b;
            if ((int)(0x7fffffff - local_44) < (int)uVar3) goto LAB_004a5d50;
            local_44 = local_44 + uVar3;
            lVar8 = lVar8 + 0x28;
            lVar7 = lVar7 + 1;
          } while (lVar7 < *(long *)(param_3 + 0x18));
        }
        uVar3 = FUN_004a1f30(cVar1,local_44,local_50);
        uVar4 = (ulong)uVar3;
        if ((param_2 != 0) && (uVar3 != 0xffffffff)) {
          FUN_004a1e10(param_2,cVar1,local_44,local_50,param_5);
          lVar8 = *(long *)(param_3 + 0x10);
          local_60 = 0;
          uVar4 = (ulong)uVar3;
          if (0 < *(long *)(param_3 + 0x18)) {
            do {
              lVar7 = FUN_004a8600(*param_1,lVar8,1);
              if (lVar7 == 0) goto switchD_004a5a1c_caseD_3;
              lVar8 = lVar8 + 0x28;
              uVar6 = FUN_004a85f0(param_1,lVar7);
              FUN_004a6010(uVar6,param_2,lVar7,0xffffffff,param_5);
              local_60 = local_60 + 1;
            } while (local_60 < *(long *)(param_3 + 0x18));
          }
          if (cVar1 == '\x02') {
            FUN_004a1f10(param_2);
          }
          if ((local_58 != (code *)0x0) && (iVar2 = (*local_58)(7,param_1,param_3,0), iVar2 == 0))
          goto switchD_004a5a1c_caseD_3;
        }
      }
    }
  }
LAB_004a5b8b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
LAB_004a5ebd:
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

