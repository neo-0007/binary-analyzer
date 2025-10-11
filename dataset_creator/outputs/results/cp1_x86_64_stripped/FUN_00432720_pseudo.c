
undefined4
FUN_00432720(long param_1,undefined8 param_2,long param_3,long param_4,byte *param_5,int param_6)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  byte *pbVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  byte bVar11;
  undefined8 uVar12;
  long lVar13;
  int iVar14;
  undefined4 uVar15;
  long in_FS_OFFSET;
  bool bVar16;
  undefined1 local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar6 = FUN_00405f40();
  if (lVar6 != 0) {
    if (param_4 == 0) {
      param_4 = param_3;
    }
    iVar3 = FUN_0040ac10(param_3);
    if (-1 < iVar3) {
      iVar5 = iVar3;
      if ((param_6 == -1) || (iVar5 = param_6, -4 < param_6)) {
        cVar2 = FUN_004b7bb0(*(undefined8 *)(param_1 + 0x28));
        bVar1 = cVar2 - 1U & 7;
        iVar4 = FUN_0056b040(param_1);
        if (((uint)*param_5 & 0xff << bVar1) == 0) {
          if (bVar1 == 0) {
            param_5 = param_5 + 1;
            iVar4 = iVar4 + -1;
          }
          uVar15 = 0;
          if (iVar3 + 1 < iVar4) {
            iVar14 = iVar4 - iVar3;
            if (iVar5 == -3) {
              iVar5 = iVar14 + -2;
              bVar11 = param_5[(long)iVar4 + -1];
            }
            else {
              if (iVar14 + -1 <= iVar5) {
                FUN_0051f420();
                uVar12 = 0x5a;
                goto LAB_00432bc1;
              }
              bVar11 = param_5[(long)iVar4 + -1];
            }
            if (bVar11 == 0xbc) {
              iVar4 = iVar14 + -1;
              lVar13 = (long)iVar4;
              pbVar7 = (byte *)FUN_0041ad90(lVar13,"../crypto/rsa/rsa_pss.c",99);
              if (pbVar7 == (byte *)0x0) {
                FUN_0051f420();
                FUN_0051f540("../crypto/rsa/rsa_pss.c",0x65,"RSA_verify_PKCS1_PSS_mgf1");
                uVar12 = 0xc0100;
              }
              else {
                lVar8 = (long)iVar3;
                iVar3 = FUN_0056c0c0(pbVar7,lVar13,param_5 + lVar13,lVar8,param_4);
                if (iVar3 < 0) goto LAB_00432a7d;
                uVar9 = 0;
                if (0 < iVar4) {
                  do {
                    pbVar7[uVar9] = pbVar7[uVar9] ^ param_5[uVar9];
                    bVar16 = iVar14 - 2 != uVar9;
                    uVar9 = uVar9 + 1;
                  } while (bVar16);
                }
                bVar11 = *pbVar7;
                if (bVar1 != 0) {
                  bVar11 = bVar11 & (byte)(0xff >> (8 - bVar1 & 0x1f));
                  *pbVar7 = bVar11;
                }
                if (bVar11 == 0) {
                  if (2 < iVar14) {
                    lVar10 = 1;
                    do {
                      bVar11 = pbVar7[lVar10];
                      if (bVar11 != 0) {
                        iVar3 = (int)lVar10 + 1;
                        goto LAB_0043293b;
                      }
                      lVar10 = lVar10 + 1;
                    } while ((ulong)(iVar14 - 3) + 2 != lVar10);
                  }
                }
                else {
                  iVar3 = 1;
LAB_0043293b:
                  if (bVar11 == 1) {
                    if ((iVar5 != -2) && (iVar4 - iVar3 != iVar5)) {
                      FUN_0051f420();
                      FUN_0051f540("../crypto/rsa/rsa_pss.c",0x74,"RSA_verify_PKCS1_PSS_mgf1");
                      FUN_0051f8f0(4,0x88,"expected: %d retrieved: %d",iVar5,iVar4 - iVar3);
                      goto LAB_00432a7d;
                    }
                    iVar5 = FUN_00407430(lVar6,param_3,0);
                    if ((((iVar5 != 0) && (iVar5 = FUN_00405f60(lVar6,&DAT_007dd120,8), iVar5 != 0))
                        && (iVar5 = FUN_00405f60(lVar6,param_2,lVar8), iVar5 != 0)) &&
                       ((iVar4 == iVar3 ||
                        (iVar3 = FUN_00405f60(lVar6,pbVar7 + iVar3,(long)(iVar4 - iVar3)),
                        iVar3 != 0)))) {
                      iVar3 = FUN_00406090(lVar6,local_88,0);
                      if (iVar3 != 0) {
                        iVar3 = thunk_FUN_00713570(local_88,param_5 + lVar13,lVar8);
                        if (iVar3 == 0) {
                          uVar15 = 1;
                          goto LAB_00432a7d;
                        }
                        FUN_0051f420();
                        FUN_0051f540("../crypto/rsa/rsa_pss.c",0x84,"RSA_verify_PKCS1_PSS_mgf1");
                        uVar12 = 0x68;
                        goto LAB_00432c5c;
                      }
                    }
                    uVar15 = 0;
                    goto LAB_00432a7d;
                  }
                }
                FUN_0051f420();
                FUN_0051f540("../crypto/rsa/rsa_pss.c",0x70,"RSA_verify_PKCS1_PSS_mgf1");
                uVar12 = 0x87;
              }
LAB_00432c5c:
              FUN_0051f8f0(4,uVar12,0);
              goto LAB_00432a7d;
            }
            FUN_0051f420();
            FUN_0051f540("../crypto/rsa/rsa_pss.c",0x5e,"RSA_verify_PKCS1_PSS_mgf1");
            uVar12 = 0x86;
          }
          else {
            FUN_0051f420();
            uVar12 = 0x54;
LAB_00432bc1:
            FUN_0051f540("../crypto/rsa/rsa_pss.c",uVar12,"RSA_verify_PKCS1_PSS_mgf1");
            uVar12 = 0x6d;
          }
          FUN_0051f8f0(4,uVar12,0);
          pbVar7 = (byte *)0x0;
          goto LAB_00432a7d;
        }
        FUN_0051f420();
        FUN_0051f540("../crypto/rsa/rsa_pss.c",0x4c,"RSA_verify_PKCS1_PSS_mgf1");
        uVar12 = 0x85;
      }
      else {
        FUN_0051f420();
        FUN_0051f540("../crypto/rsa/rsa_pss.c",0x45,"RSA_verify_PKCS1_PSS_mgf1");
        uVar12 = 0x88;
      }
      uVar15 = 0;
      FUN_0051f8f0(4,uVar12,0);
      pbVar7 = (byte *)0x0;
      goto LAB_00432a7d;
    }
  }
  pbVar7 = (byte *)0x0;
  uVar15 = 0;
LAB_00432a7d:
  FUN_0041ad60(pbVar7,"../crypto/rsa/rsa_pss.c",0x8b);
  FUN_00406b90(lVar6);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar15;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

