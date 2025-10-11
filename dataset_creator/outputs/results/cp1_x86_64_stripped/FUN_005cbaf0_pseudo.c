
undefined8 FUN_005cbaf0(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  ulong local_48;
  
  uVar3 = FUN_004cdb50();
  lVar4 = FUN_004cca80(param_2,uVar3);
  iVar2 = FUN_00436480(lVar4);
  if (iVar2 < 1) {
    FUN_0051f420();
    FUN_0051f540("../crypto/conf/conf_ssl.c",0x4c,"ssl_module_init");
    FUN_0051f8f0(0xe,(lVar4 == 0) + 'w',"section=%s",uVar3);
LAB_005cbcbf:
    if (DAT_009427c0 != 0) {
      FUN_005cb9d0();
    }
  }
  else {
    iVar2 = FUN_00436480(lVar4);
    uVar10 = (ulong)iVar2;
    if (DAT_009427c0 != 0) {
      FUN_005cb9d0();
    }
    DAT_009427c0 = FUN_0041aec0(uVar10 * 0x18,"../crypto/conf/conf_ssl.c",0x51);
    if (DAT_009427c0 != 0) {
      DAT_009427b8 = uVar10;
      if (uVar10 != 0) {
        local_48 = 0;
        do {
          plVar1 = (long *)(DAT_009427c0 + local_48 * 0x18);
          lVar5 = FUN_004364a0(lVar4,local_48 & 0xffffffff);
          lVar6 = FUN_004cca80(param_2,*(undefined8 *)(lVar5 + 0x10));
          iVar2 = FUN_00436480(lVar6);
          if (iVar2 < 1) {
            FUN_0051f420();
            FUN_0051f540("../crypto/conf/conf_ssl.c",0x60,"ssl_module_init");
            FUN_0051f8f0(0xe,(lVar6 == 0) + 'u',"name=%s, value=%s",*(undefined8 *)(lVar5 + 8),
                         *(undefined8 *)(lVar5 + 0x10));
            goto LAB_005cbcbf;
          }
          lVar5 = FUN_0041c2c0(*(undefined8 *)(lVar5 + 8),"../crypto/conf/conf_ssl.c",100);
          *plVar1 = lVar5;
          if (lVar5 == 0) goto LAB_005cbcbf;
          iVar2 = FUN_00436480(lVar6);
          uVar10 = (ulong)iVar2;
          lVar5 = FUN_0041aec0(uVar10 << 4,"../crypto/conf/conf_ssl.c",0x68);
          plVar1[1] = lVar5;
          if (lVar5 == 0) goto LAB_005cbcbf;
          plVar1[2] = uVar10;
          uVar11 = 0;
          if (uVar10 != 0) {
            do {
              lVar7 = FUN_004364a0(lVar6,uVar11 & 0xffffffff);
              lVar5 = *(long *)(lVar7 + 8);
              plVar9 = (long *)(uVar11 * 0x10 + plVar1[1]);
              lVar8 = thunk_FUN_00712710(lVar5,0x2e);
              if (lVar8 != 0) {
                lVar5 = lVar8 + 1;
              }
              lVar5 = FUN_0041c2c0(lVar5,"../crypto/conf/conf_ssl.c",0x77);
              uVar3 = *(undefined8 *)(lVar7 + 0x10);
              *plVar9 = lVar5;
              lVar5 = FUN_0041c2c0(uVar3,"../crypto/conf/conf_ssl.c",0x78);
              plVar9[1] = lVar5;
              if ((*plVar9 == 0) || (lVar5 == 0)) goto LAB_005cbcbf;
              uVar11 = uVar11 + 1;
            } while (uVar10 != uVar11);
          }
          local_48 = local_48 + 1;
        } while (local_48 < DAT_009427b8);
      }
      return 1;
    }
  }
  return 0;
}

