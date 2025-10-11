
int FUN_00432d70(long param_1,byte *param_2,undefined8 param_3,long param_4,long param_5,int param_6
                )

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long local_68;
  byte *local_60;
  int local_48;
  
  if (param_5 == 0) {
    param_5 = param_4;
  }
  iVar4 = FUN_0040ac10(param_4);
  if (iVar4 < 0) {
    lVar10 = (long)param_6;
    lVar7 = 0;
    iVar6 = 0;
    local_68 = 0;
    goto LAB_00432ebb;
  }
  iVar6 = iVar4;
  if (param_6 == -1) {
LAB_00432dce:
    param_6 = iVar6;
    cVar2 = FUN_004b7bb0(*(undefined8 *)(param_1 + 0x28));
    bVar3 = cVar2 - 1U & 7;
    local_48 = FUN_0056b040(param_1);
    local_60 = param_2;
    if (bVar3 == 0) {
      local_48 = local_48 + -1;
      local_60 = param_2 + 1;
      *param_2 = 0;
    }
    if (iVar4 + 1 < local_48) {
      iVar5 = local_48 - iVar4;
      if (param_6 == -3) {
        param_6 = iVar5 + -2;
      }
      else if (iVar5 + -1 <= param_6) {
        lVar10 = (long)param_6;
        iVar6 = 0;
        FUN_0051f420();
        FUN_0051f540("../crypto/rsa/rsa_pss.c",199,"RSA_padding_add_PKCS1_PSS_mgf1");
        FUN_0051f8f0(4,0x6e,0);
        lVar7 = 0;
        local_68 = 0;
        goto LAB_00432ebb;
      }
      lVar10 = (long)param_6;
      if (param_6 < 1) {
        local_68 = 0;
      }
      else {
        local_68 = FUN_0041ad90(lVar10,"../crypto/rsa/rsa_pss.c",0xcb);
        if (local_68 == 0) {
          FUN_0051f420();
          iVar6 = 0;
          FUN_0051f540("../crypto/rsa/rsa_pss.c",0xcd,"RSA_padding_add_PKCS1_PSS_mgf1");
          FUN_0051f8f0(4,0xc0100,0);
          lVar7 = 0;
          goto LAB_00432ebb;
        }
        iVar6 = FUN_00429580(*(undefined8 *)(param_1 + 8),local_68,lVar10,0);
        if (iVar6 < 1) {
          lVar7 = 0;
          iVar6 = 0;
          goto LAB_00432ebb;
        }
      }
      lVar7 = FUN_00405f40();
      iVar6 = 0;
      if (((lVar7 != 0) && (iVar6 = FUN_00407430(lVar7,param_4,0), iVar6 != 0)) &&
         (iVar6 = FUN_00405f60(lVar7,&DAT_007dd120,8), iVar6 != 0)) {
        iVar6 = FUN_00405f60(lVar7,param_3,(long)iVar4);
        if ((iVar6 != 0) &&
           ((param_6 == 0 || (iVar6 = FUN_00405f60(lVar7,local_68,lVar10), iVar6 != 0)))) {
          iVar6 = FUN_00406090(lVar7,local_60 + (iVar5 + -1),0);
          if (iVar6 != 0) {
            iVar6 = 0;
            iVar5 = FUN_0056c0c0(local_60,(long)(iVar5 + -1),local_60 + (iVar5 + -1),(long)iVar4,
                                 param_5);
            if (iVar5 == 0) {
              pbVar1 = local_60 + (long)((local_48 - param_6) - iVar4) + -2;
              *pbVar1 = *pbVar1 ^ 1;
              if (0 < param_6) {
                uVar8 = 1;
                do {
                  pbVar1[uVar8] = pbVar1[uVar8] ^ *(byte *)(local_68 + -1 + uVar8);
                  uVar8 = uVar8 + 1;
                } while (uVar8 != param_6 + 1);
              }
              if (bVar3 != 0) {
                *local_60 = *local_60 & (byte)(0xff >> (8 - bVar3 & 0x1f));
              }
              iVar6 = 1;
              local_60[(long)local_48 + -1] = 0xbc;
            }
          }
        }
      }
      goto LAB_00432ebb;
    }
    FUN_0051f420();
    FUN_0051f540("../crypto/rsa/rsa_pss.c",0xc1,"RSA_padding_add_PKCS1_PSS_mgf1");
    uVar9 = 0x6e;
  }
  else {
    if (param_6 == -2) {
      iVar6 = -3;
      goto LAB_00432dce;
    }
    iVar6 = param_6;
    if (-4 < param_6) goto LAB_00432dce;
    FUN_0051f420();
    FUN_0051f540("../crypto/rsa/rsa_pss.c",0xb6,"RSA_padding_add_PKCS1_PSS_mgf1");
    uVar9 = 0x88;
  }
  lVar10 = (long)param_6;
  iVar6 = 0;
  FUN_0051f8f0(4,uVar9,0);
  lVar7 = 0;
  local_68 = 0;
LAB_00432ebb:
  FUN_00406b90(lVar7);
  FUN_0041aef0(local_68,lVar10,"../crypto/rsa/rsa_pss.c",0xfc);
  return iVar6;
}

