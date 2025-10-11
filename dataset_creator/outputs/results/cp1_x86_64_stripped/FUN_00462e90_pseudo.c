
uint FUN_00462e90(long param_1,long param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  char *pcVar15;
  long in_FS_OFFSET;
  char *local_88;
  long local_80;
  long local_58;
  long local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_50 = 0;
  if ((param_1 == 0) || (param_2 == 0)) {
    FUN_0051f420();
    uVar3 = 0;
    FUN_0051f540("../providers/implementations/encode_decode/encode_key2text.c",0x1f5,"ec_to_text");
    FUN_0051f8f0(0x39,0xc0102,0);
    goto LAB_00463083;
  }
  lVar5 = FUN_004ee2d0(param_2);
  if (lVar5 == 0) {
    FUN_0051f420();
    uVar3 = 0;
    FUN_0051f540("../providers/implementations/encode_decode/encode_key2text.c",0x1fa,"ec_to_text");
    FUN_0051f8f0(0x39,0x9e,0);
    goto LAB_00463083;
  }
  if ((param_3 & 1) == 0) {
    if ((param_3 & 2) == 0) {
      local_88 = (char *)0x0;
      local_80 = 0;
      if ((param_3 & 4) != 0) {
        local_88 = "EC-Parameters";
      }
      lVar6 = 0;
LAB_00462f41:
      uVar1 = FUN_004ef7f0(lVar5);
      iVar2 = FUN_004ae9e0(param_1,"%s: (%d bit)\n",local_88,uVar1);
      uVar3 = 0;
      if ((((0 < iVar2) &&
           ((local_58 == 0 || (uVar3 = FUN_00462ae0(param_1,"priv:",local_58,lVar6), uVar3 != 0))))
          && ((local_50 == 0 ||
              (uVar3 = FUN_00462ae0(param_1,&DAT_007e3f34,local_50,local_80), uVar3 != 0)))) &&
         (uVar3 = param_3 & 4, (param_3 & 4) != 0)) {
        uVar7 = FUN_004ee2a0(param_2);
        uVar4 = FUN_004ef8b0(lVar5);
        uVar4 = uVar4 & 1;
        if (uVar4 == 0) {
          lVar8 = FUN_004b2a70(uVar7);
          uVar3 = 0;
          if (lVar8 != 0) {
            FUN_004b2c00(lVar8);
            uVar1 = FUN_004ef890(lVar5);
            lVar9 = FUN_004ef7e0(lVar5);
            if (lVar9 != 0) {
              lVar10 = FUN_004ef9b0(lVar5);
              local_88 = (char *)0x0;
              if (lVar10 != 0) {
                local_88 = (char *)FUN_004ef9c0(lVar5);
              }
              lVar11 = FUN_004ef840(lVar5);
              uVar7 = FUN_00423b00(uVar1);
              iVar2 = FUN_004ae9e0(param_1,"Field Type: %s\n",uVar7);
              if (0 < iVar2) {
                uVar7 = FUN_004b2df0(lVar8);
                uVar12 = FUN_004b2df0(lVar8);
                lVar13 = FUN_004b2df0(lVar8);
                if ((lVar13 != 0) &&
                   (iVar2 = FUN_004efa30(lVar5,uVar7,uVar12,lVar13,lVar8), iVar2 != 0)) {
                  iVar2 = FUN_004ef890(lVar5);
                  pcVar15 = "Prime:";
                  if (iVar2 == 0x197) {
                    iVar2 = FUN_004f1ad0(lVar5,"Prime:");
                    if (iVar2 != 0) {
                      uVar14 = FUN_00423b00(iVar2);
                      iVar2 = FUN_004ae9e0(param_1,"Basis Type: %s\n",uVar14);
                      if (0 < iVar2) {
                        pcVar15 = "Polynomial:";
                        goto LAB_0046327b;
                      }
                    }
                  }
                  else {
LAB_0046327b:
                    iVar2 = FUN_00461e70(param_1,pcVar15,uVar7);
                    if (((iVar2 != 0) && (iVar2 = FUN_00461e70(param_1,"A:   ",uVar12), iVar2 != 0))
                       && (iVar2 = FUN_00461e70(param_1,"B:   ",lVar13), iVar2 != 0)) {
                      local_48 = 0;
                      iVar2 = FUN_004ef8d0(lVar5);
                      lVar13 = FUN_004ef780(lVar5);
                      if (lVar13 != 0) {
                        if (iVar2 == 4) {
                          pcVar15 = "Generator (uncompressed):";
                        }
                        else if (iVar2 == 6) {
                          pcVar15 = "Generator (hybrid):";
                        }
                        else {
                          if (iVar2 != 2) goto LAB_00463290;
                          pcVar15 = "Generator (compressed):";
                        }
                        lVar5 = FUN_004f4df0(lVar5,lVar13,iVar2,&local_48,lVar8);
                        if (lVar5 != 0) {
                          iVar2 = FUN_00462ae0(param_1,pcVar15,local_48,lVar5);
                          FUN_0041aef0(local_48,lVar5,
                                       "../providers/implementations/encode_decode/encode_key2text.c"
                                       ,0x1a7);
                          if ((((iVar2 != 0) &&
                               (iVar2 = FUN_00461e70(param_1,"Order: ",lVar9), iVar2 != 0)) &&
                              ((lVar11 == 0 ||
                               (iVar2 = FUN_00461e70(param_1,"Cofactor: ",lVar11), iVar2 != 0)))) &&
                             (uVar4 = 1, lVar10 != 0)) {
                            iVar2 = FUN_00462ae0(param_1,"Seed:",lVar10,local_88);
                            uVar4 = (uint)(iVar2 != 0);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
LAB_00463290:
            FUN_004b2d50(lVar8);
            FUN_004b2b50(lVar8);
            uVar3 = uVar4;
          }
        }
        else {
          uVar3 = FUN_004ef870(lVar5);
          if (uVar3 != 0) {
            uVar7 = FUN_00423b00(uVar3);
            iVar2 = FUN_004ae9e0(param_1,"%s: %s\n","ASN1 OID",uVar7);
            if (iVar2 < 1) {
              uVar3 = 0;
            }
            else {
              lVar5 = thunk_FUN_00535730(uVar3);
              uVar3 = uVar4;
              if (lVar5 != 0) {
                iVar2 = FUN_004ae9e0(param_1,"%s: %s\n","NIST CURVE",lVar5);
                uVar3 = (uint)(0 < iVar2);
              }
            }
          }
        }
      }
    }
    else {
      lVar6 = 0;
      local_88 = "Public-Key";
LAB_00463007:
      lVar8 = FUN_004ee3f0(param_2);
      if (lVar8 == 0) {
        FUN_0051f420();
        uVar3 = 0;
        FUN_0051f540("../providers/implementations/encode_decode/encode_key2text.c",0x214,
                     "ec_to_text");
        FUN_0051f8f0(0x39,0xdc,0);
      }
      else {
        uVar3 = 0;
        uVar1 = FUN_004ee650(param_2);
        local_80 = FUN_004ee960(param_2,uVar1,&local_50,0);
        if (local_80 != 0) goto LAB_00462f41;
      }
    }
  }
  else {
    lVar6 = FUN_004ee2e0(param_2);
    if (lVar6 == 0) {
      FUN_0051f420();
      uVar3 = 0;
      lVar6 = 0;
      FUN_0051f540("../providers/implementations/encode_decode/encode_key2text.c",0x209,"ec_to_text"
                  );
      FUN_0051f8f0(0x39,0xdd,0);
    }
    else {
      lVar6 = FUN_004eecb0(param_2,&local_58);
      uVar3 = 0;
      if (lVar6 != 0) {
        local_88 = "Private-Key";
        if ((param_3 & 2) != 0) goto LAB_00463007;
        local_80 = 0;
        goto LAB_00462f41;
      }
    }
  }
  FUN_0041aef0(local_58,lVar6,"../providers/implementations/encode_decode/encode_key2text.c",0x229);
  FUN_0041ad60(local_50,"../providers/implementations/encode_decode/encode_key2text.c",0x22a);
LAB_00463083:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar3;
}

