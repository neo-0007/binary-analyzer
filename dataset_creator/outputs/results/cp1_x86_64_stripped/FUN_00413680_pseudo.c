
int * FUN_00413680(int *param_1)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  int *piVar4;
  long lVar5;
  ulong uVar6;
  long in_FS_OFFSET;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(param_1 + 0x20) != 0) && (iVar3 = FUN_0051a180(), iVar3 == 0)) {
    FUN_0051f420();
    piVar4 = (int *)0x0;
    FUN_0051f540("../crypto/evp/pmeth_lib.c",0x1df,"EVP_PKEY_CTX_dup");
    FUN_0051f8f0(6,0x80026,0);
    goto LAB_00413801;
  }
  piVar4 = (int *)FUN_0041aec0(0xb0,"../crypto/evp/pmeth_lib.c",0x1e3);
  if (piVar4 == (int *)0x0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/evp/pmeth_lib.c",0x1e5,"EVP_PKEY_CTX_dup");
    FUN_0051f8f0(6,0xc0100,0);
    goto LAB_00413801;
  }
  lVar5 = *(long *)(param_1 + 0x22);
  if (lVar5 != 0) {
    FUN_0040ed80();
    lVar5 = *(long *)(param_1 + 0x22);
  }
  iVar3 = *param_1;
  *(long *)(piVar4 + 0x22) = lVar5;
  *piVar4 = iVar3;
  *(undefined8 *)(piVar4 + 2) = *(undefined8 *)(param_1 + 2);
  uVar1 = *(undefined8 *)(param_1 + 6);
  piVar4[4] = 0;
  piVar4[5] = 0;
  lVar5 = *(long *)(param_1 + 4);
  *(undefined8 *)(piVar4 + 6) = uVar1;
  if (lVar5 != 0) {
    lVar5 = FUN_0041c2c0(lVar5,"../crypto/evp/pmeth_lib.c",0x1f1);
    *(long *)(piVar4 + 4) = lVar5;
    if (lVar5 != 0) goto LAB_00413744;
    goto LAB_004137ed;
  }
LAB_00413744:
  piVar4[0x1d] = param_1[0x1d];
  iVar3 = *param_1;
  if (iVar3 == 0x800) {
    if (*(long *)(param_1 + 10) != 0) {
      *(long *)(piVar4 + 10) = *(long *)(param_1 + 10);
      iVar3 = FUN_0053aa40();
      if (iVar3 != 0) {
        if (*(long *)(param_1 + 0xc) == 0) goto LAB_0041379b;
        if (*(long *)(param_1 + 10) != 0) {
          lVar5 = (**(code **)(*(long *)(param_1 + 10) + 0x58))();
          *(long *)(piVar4 + 0xc) = lVar5;
          if (lVar5 != 0) goto LAB_00413801;
          FUN_0053aa50(*(undefined8 *)(piVar4 + 10));
          piVar4[10] = 0;
          piVar4[0xb] = 0;
        }
      }
      goto LAB_004137ed;
    }
LAB_00413980:
    if (*(long *)(param_1 + 0xc) == 0) {
LAB_0041379b:
      lVar5 = *(long *)(param_1 + 0x24);
      *(undefined8 *)(piVar4 + 0x1e) = *(undefined8 *)(param_1 + 0x1e);
      *(undefined8 *)(piVar4 + 0x20) = *(undefined8 *)(param_1 + 0x20);
      if (lVar5 != 0) {
        FUN_0040ed80();
        lVar5 = *(long *)(param_1 + 0x24);
      }
      lVar2 = *(long *)(param_1 + 0x1e);
      *(long *)(piVar4 + 0x24) = lVar5;
      if (lVar2 == 0) {
        if (*piVar4 == 0) {
          local_28 = *(undefined8 *)(param_1 + 8);
          lVar5 = FUN_0040fbe0(*(undefined8 *)(param_1 + 0x22),*(undefined8 *)(param_1 + 2),
                               &local_28,*(undefined8 *)(param_1 + 4));
          if ((lVar5 != 0) && (iVar3 = FUN_0053e0e0(local_28), iVar3 != 0)) {
            FUN_0053e0f0(*(undefined8 *)(piVar4 + 8));
            *(undefined8 *)(piVar4 + 8) = local_28;
            goto LAB_00413801;
          }
        }
      }
      else {
        iVar3 = (**(code **)(lVar2 + 0x10))(piVar4,param_1);
        if (0 < iVar3) goto LAB_00413801;
      }
    }
  }
  else {
    if (iVar3 != 0x200) {
      if (0x200 < iVar3) {
        if ((iVar3 - 0x1000U & 0xffffefff) == 0) {
          if (*(long *)(param_1 + 10) == 0) goto LAB_00413980;
          *(long *)(piVar4 + 10) = *(long *)(param_1 + 10);
          iVar3 = FUN_0053c560();
          if (iVar3 != 0) {
            if (*(long *)(param_1 + 0xc) == 0) goto LAB_0041379b;
            if (*(long *)(param_1 + 10) != 0) {
              lVar5 = (**(code **)(*(long *)(param_1 + 10) + 0x60))();
              *(long *)(piVar4 + 0xc) = lVar5;
              if (lVar5 != 0) goto LAB_00413801;
              FUN_0053c570(*(undefined8 *)(piVar4 + 10));
              piVar4[10] = 0;
              piVar4[0xb] = 0;
            }
          }
          goto LAB_004137ed;
        }
        if (iVar3 != 0x400) goto LAB_0041379b;
        goto LAB_00413845;
      }
      if (iVar3 < 0x41) {
        if (1 < iVar3) {
          uVar6 = 1L << ((char)iVar3 - 2U & 0x3f);
          if ((uVar6 & 0x4000000040004000) != 0) goto LAB_004138b6;
          if ((uVar6 & 5) != 0) goto LAB_004137ed;
        }
      }
      else if ((iVar3 - 0x80U & 0xffffff7f) == 0) {
LAB_004138b6:
        if (*(long *)(param_1 + 10) == 0) goto LAB_00413980;
        *(long *)(piVar4 + 10) = *(long *)(param_1 + 10);
        iVar3 = FUN_00415cc0();
        if (iVar3 != 0) {
          if (*(long *)(param_1 + 0xc) == 0) goto LAB_0041379b;
          if (*(long *)(param_1 + 10) != 0) {
            lVar5 = (**(code **)(*(long *)(param_1 + 10) + 0xb0))();
            *(long *)(piVar4 + 0xc) = lVar5;
            if (lVar5 != 0) goto LAB_00413801;
            FUN_00415cd0(*(undefined8 *)(piVar4 + 10));
            piVar4[10] = 0;
            piVar4[0xb] = 0;
          }
        }
        goto LAB_004137ed;
      }
      goto LAB_0041379b;
    }
LAB_00413845:
    if (*(long *)(param_1 + 10) == 0) goto LAB_00413980;
    *(long *)(piVar4 + 10) = *(long *)(param_1 + 10);
    iVar3 = FUN_0051f9e0();
    if (iVar3 != 0) {
      if (*(long *)(param_1 + 0xc) == 0) goto LAB_0041379b;
      if (*(long *)(param_1 + 10) != 0) {
        lVar5 = (**(code **)(*(long *)(param_1 + 10) + 0x60))();
        *(long *)(piVar4 + 0xc) = lVar5;
        if (lVar5 != 0) goto LAB_00413801;
        FUN_0051f9f0(*(undefined8 *)(piVar4 + 10));
        piVar4[10] = 0;
        piVar4[0xb] = 0;
      }
    }
  }
LAB_004137ed:
  piVar4[0x1e] = 0;
  piVar4[0x1f] = 0;
  FUN_00412f00(piVar4);
  piVar4 = (int *)0x0;
LAB_00413801:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return piVar4;
}

