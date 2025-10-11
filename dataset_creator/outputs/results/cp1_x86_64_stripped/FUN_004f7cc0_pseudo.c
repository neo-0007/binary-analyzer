
undefined8 FUN_004f7cc0(undefined8 param_1,long param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  char *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long in_FS_OFFSET;
  long local_80;
  undefined8 local_58;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  if (param_2 == 0) {
    local_80 = 0;
    lVar5 = 0;
    lVar4 = 0;
    lVar7 = 0;
    uVar12 = 0xc0102;
    lVar6 = 0;
    goto LAB_004f7d89;
  }
  lVar4 = FUN_004b2b10();
  if (lVar4 == 0) {
LAB_004f7d72:
    lVar5 = 0;
    lVar6 = 0;
    lVar7 = 0;
    uVar12 = 0xc0100;
    local_80 = 0;
  }
  else {
    iVar1 = FUN_004ef8b0(param_2);
    if (iVar1 == 0) {
      iVar1 = FUN_004ef890(param_2);
      lVar6 = FUN_004b7690();
      if (lVar6 == 0) goto LAB_004f7d72;
      lVar5 = FUN_004b7690();
      if (lVar5 == 0) {
        local_80 = 0;
        lVar7 = 0;
        uVar12 = 0xc0100;
      }
      else {
        local_80 = FUN_004b7690();
        if (local_80 == 0) {
          lVar7 = 0;
          uVar12 = 0xc0100;
        }
        else {
          iVar2 = FUN_004efa30(param_2,lVar6,lVar5,local_80,lVar4);
          if ((iVar2 != 0) && (lVar7 = FUN_004ef780(param_2), lVar7 != 0)) {
            lVar8 = FUN_004ef7e0(param_2);
            lVar9 = FUN_004ef840(param_2);
            if (lVar8 != 0) {
              iVar2 = FUN_004ef8d0(param_2);
              lVar7 = FUN_004f4df0(param_2,lVar7,iVar2,&local_48,lVar4);
              if (lVar7 == 0) {
                uVar12 = 0x80010;
                goto LAB_004f7d89;
              }
              lVar10 = FUN_004ef9b0(param_2);
              local_58 = 0;
              if (lVar10 != 0) {
                local_58 = FUN_004ef9c0(param_2);
              }
              iVar3 = FUN_004abce0(param_1,param_3,0x80);
              if (iVar3 != 0) {
                uVar12 = FUN_00423b00(iVar1);
                iVar3 = FUN_004ae9e0(param_1,"Field Type: %s\n",uVar12);
                if (0 < iVar3) {
                  if (iVar1 == 0x197) {
                    iVar1 = FUN_004f1ad0(param_2);
                    if ((iVar1 != 0) && (iVar3 = FUN_004abce0(param_1,param_3,0x80), iVar3 != 0)) {
                      uVar12 = FUN_00423b00(iVar1);
                      iVar1 = FUN_004ae9e0(param_1,"Basis Type: %s\n",uVar12);
                      if (0 < iVar1) {
                        iVar1 = FUN_005bc920(param_1,"Polynomial:",lVar6,0,param_3);
                        goto joined_r0x004f822d;
                      }
                    }
                  }
                  else {
                    iVar1 = FUN_005bc920(param_1,"Prime:",lVar6,0,param_3);
joined_r0x004f822d:
                    if (((iVar1 != 0) &&
                        (iVar1 = FUN_005bc920(param_1,"A:   ",lVar5,0,param_3), iVar1 != 0)) &&
                       (iVar1 = FUN_005bc920(param_1,"B:   ",local_80,0,param_3), iVar1 != 0)) {
                      pcVar11 = "Generator (compressed):";
                      if ((iVar2 != 2) && (pcVar11 = "Generator (uncompressed):", iVar2 != 4)) {
                        pcVar11 = "Generator (hybrid):";
                      }
                      if (((local_48 == 0) ||
                          (iVar1 = FUN_004f7990(param_1,pcVar11,local_48,lVar7,param_3), iVar1 != 0)
                          ) && ((iVar1 = FUN_005bc920(param_1,"Order: ",lVar8,0,param_3), iVar1 != 0
                                && ((lVar9 == 0 ||
                                    (iVar1 = FUN_005bc920(param_1,"Cofactor: ",lVar9,0,param_3),
                                    iVar1 != 0)))))) {
                        if (lVar10 == 0) {
                          uVar13 = 1;
                          goto LAB_004f7dbd;
                        }
                        iVar1 = FUN_004f7990(param_1,"Seed:",lVar10,local_58,param_3);
                        if (iVar1 != 0) goto LAB_004f81be;
                      }
                    }
                  }
                }
              }
LAB_004f7f40:
              uVar12 = 0x80020;
              goto LAB_004f7d89;
            }
          }
          lVar7 = 0;
          uVar12 = 0x80010;
        }
      }
    }
    else {
      iVar1 = FUN_004abce0(param_1,param_3,0x80);
      if ((iVar1 != 0) && (iVar1 = FUN_004ef870(param_2), iVar1 != 0)) {
        uVar12 = FUN_00423b00(iVar1);
        iVar2 = FUN_004ae9e0(param_1,"ASN1 OID: %s",uVar12);
        if ((0 < iVar2) && (iVar2 = FUN_004ae9e0(param_1,&DAT_008243ea), 0 < iVar2)) {
          lVar6 = thunk_FUN_00535730(iVar1);
          if (lVar6 == 0) {
            local_80 = 0;
            lVar5 = 0;
            lVar7 = 0;
            uVar13 = 1;
            lVar6 = 0;
            goto LAB_004f7dbd;
          }
          iVar1 = FUN_004abce0(param_1,param_3,0x80);
          if (iVar1 != 0) {
            iVar1 = FUN_004ae9e0(param_1,"NIST CURVE: %s\n",lVar6);
            lVar7 = 0;
            lVar5 = 0;
            lVar6 = 0;
            local_80 = 0;
            if (iVar1 < 1) goto LAB_004f7f40;
LAB_004f81be:
            uVar13 = 1;
            goto LAB_004f7dbd;
          }
        }
      }
      lVar7 = 0;
      lVar5 = 0;
      lVar6 = 0;
      uVar12 = 0x80020;
      local_80 = 0;
    }
  }
LAB_004f7d89:
  FUN_0051f420();
  FUN_0051f540("../crypto/ec/eck_prn.c",0xd8,"ECPKParameters_print");
  uVar13 = 0;
  FUN_0051f8f0(0x10,uVar12,0);
LAB_004f7dbd:
  FUN_004b7fa0(lVar6);
  FUN_004b7fa0(lVar5);
  FUN_004b7fa0(local_80);
  FUN_0041aef0(local_48,lVar7,"../crypto/ec/eck_prn.c",0xdc);
  FUN_004b2b50(lVar4);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

