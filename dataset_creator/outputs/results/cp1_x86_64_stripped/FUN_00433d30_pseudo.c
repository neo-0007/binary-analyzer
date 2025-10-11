
undefined4
FUN_00433d30(int param_1,long *param_2,uint param_3,long *param_4,ulong *param_5,undefined8 param_6,
            ulong param_7,undefined8 param_8)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  long *local_68;
  ulong local_50;
  undefined8 local_48;
  long local_40;
  
  uVar4 = (ulong)param_3;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_48 = 0;
  iVar2 = FUN_0056b040(param_8);
  if ((long)iVar2 != param_7) {
    FUN_0051f420();
    uVar6 = 0;
    FUN_0051f540("../crypto/rsa/rsa_sign.c",0x154,"ossl_rsa_verify");
    FUN_0051f8f0(4,0x77,0);
    goto LAB_00433dce;
  }
  plVar3 = (long *)FUN_0041ad90(param_7,"../crypto/rsa/rsa_sign.c",0x159);
  if (plVar3 == (long *)0x0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/rsa/rsa_sign.c",0x15b,"ossl_rsa_verify");
    uVar5 = 0xc0100;
LAB_004340e0:
    uVar8 = 0;
    uVar6 = 0;
    FUN_0051f8f0(4,uVar5,0);
    uVar5 = 0;
  }
  else {
    iVar2 = FUN_0056b0a0(param_7 & 0xffffffff,param_6,plVar3,param_8,1);
    if (iVar2 < 1) goto LAB_00433f58;
    if (param_1 == 0x72) {
      if (iVar2 == 0x24) {
        if (param_4 != (long *)0x0) {
          lVar1 = plVar3[1];
          uVar5 = 0;
          uVar8 = 0;
          uVar6 = 1;
          *param_4 = *plVar3;
          param_4[1] = lVar1;
          lVar1 = plVar3[3];
          param_4[2] = plVar3[2];
          param_4[3] = lVar1;
          *(int *)(param_4 + 4) = (int)plVar3[4];
          *param_5 = 0x24;
          goto LAB_00433f61;
        }
        if (param_3 == 0x24) {
          if (((plVar3[1] == param_2[1] && *plVar3 == *param_2) &&
              (plVar3[3] == param_2[3] && plVar3[2] == param_2[2])) &&
             ((int)plVar3[4] == (int)param_2[4])) goto LAB_00434210;
          FUN_0051f420();
          FUN_0051f540("../crypto/rsa/rsa_sign.c",0x17b,"ossl_rsa_verify");
          uVar5 = 0x68;
        }
        else {
          FUN_0051f420();
          uVar5 = 0x176;
LAB_00434239:
          FUN_0051f540("../crypto/rsa/rsa_sign.c",uVar5,"ossl_rsa_verify");
          uVar5 = 0x83;
        }
      }
      else {
        FUN_0051f420();
        FUN_0051f540("../crypto/rsa/rsa_sign.c",0x16d,"ossl_rsa_verify");
        uVar5 = 0x68;
      }
      goto LAB_004340e0;
    }
    uVar7 = (ulong)iVar2;
    local_68 = param_2;
    if ((param_1 == 0x5f) && (uVar7 == 0x12)) {
      if (((char)*plVar3 == '\x04') && (*(char *)((long)plVar3 + 1) == '\x10')) {
        if (param_4 == (long *)0x0) {
          if (param_3 != 0x10) {
            FUN_0051f420();
            uVar5 = 0x18a;
            goto LAB_00434239;
          }
          if (param_2[1] != *(long *)((long)plVar3 + 10) || *param_2 != *(long *)((long)plVar3 + 2))
          {
            FUN_0051f420();
            FUN_0051f540("../crypto/rsa/rsa_sign.c",399,"ossl_rsa_verify");
            uVar5 = 0x68;
            goto LAB_004340e0;
          }
        }
        else {
          lVar1 = *(long *)((long)plVar3 + 10);
          *param_4 = *(long *)((long)plVar3 + 2);
          param_4[1] = lVar1;
          *param_5 = 0x10;
        }
LAB_00434210:
        uVar5 = 0;
        uVar8 = 0;
        uVar6 = 1;
        goto LAB_00433f61;
      }
      if (param_4 != (long *)0x0) goto LAB_00433f58;
    }
    else if (param_4 != (long *)0x0) {
      if (param_1 != 0x2a3) {
        if (param_1 < 0x2a4) {
          if (param_1 == 0x101) {
LAB_00434020:
            uVar4 = 0x10;
            uVar8 = 0x10;
            goto LAB_00433fe2;
          }
          if (param_1 < 0x102) {
            if ((param_1 == 0x40) || (param_1 == 0x75)) {
              uVar4 = 0x14;
              uVar8 = 0x14;
              goto LAB_00433fe2;
            }
            if (param_1 == 4) goto LAB_00434020;
          }
          else {
            if (param_1 == 0x2a1) goto switchD_0043405c_caseD_44a;
            if (param_1 == 0x2a2) goto switchD_0043405c_caseD_44b;
            if (param_1 == 0x2a0) goto switchD_0043405c_caseD_447;
          }
        }
        else if (param_1 - 0x446U < 6) {
          switch(param_1) {
          case 0x447:
          case 0x449:
switchD_0043405c_caseD_447:
            uVar4 = 0x20;
            uVar8 = 0x20;
            break;
          default:
            goto switchD_0043405c_caseD_448;
          case 0x44a:
switchD_0043405c_caseD_44a:
            uVar4 = 0x30;
            uVar8 = 0x30;
            break;
          case 1099:
switchD_0043405c_caseD_44b:
            uVar4 = 0x40;
            uVar8 = 0x40;
          }
          goto LAB_00433fe2;
        }
LAB_00433f58:
        uVar5 = 0;
        uVar8 = 0;
        uVar6 = 0;
        goto LAB_00433f61;
      }
switchD_0043405c_caseD_448:
      uVar4 = 0x1c;
      uVar8 = 0x1c;
LAB_00433fe2:
      local_68 = (long *)((long)plVar3 + (uVar7 - uVar8));
      if (uVar7 < uVar8) {
        FUN_0051f420();
        FUN_0051f540("../crypto/rsa/rsa_sign.c",0x1a2,"ossl_rsa_verify");
        uVar5 = 0x8f;
        goto LAB_004340e0;
      }
    }
    iVar2 = FUN_00433990(&local_48,&local_50,param_1,local_68,uVar4);
    uVar5 = local_48;
    uVar8 = local_50;
    if (iVar2 == 0) {
      uVar6 = 0;
    }
    else if ((local_50 == uVar7) && (iVar2 = thunk_FUN_00713570(local_48,plVar3,uVar7), iVar2 == 0))
    {
      uVar6 = 1;
      uVar8 = uVar7;
      if (param_4 != (long *)0x0) {
        thunk_FUN_00713a50(param_4,local_68,uVar4);
        *param_5 = uVar4;
      }
    }
    else {
      uVar6 = 0;
      FUN_0051f420();
      FUN_0051f540("../crypto/rsa/rsa_sign.c",0x1ae,"ossl_rsa_verify");
      FUN_0051f8f0(4,0x68,0);
    }
  }
LAB_00433f61:
  FUN_0041aef0(uVar5,uVar8,"../crypto/rsa/rsa_sign.c",0x1bc);
  FUN_0041aef0(plVar3,param_7,"../crypto/rsa/rsa_sign.c",0x1bd);
LAB_00433dce:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

