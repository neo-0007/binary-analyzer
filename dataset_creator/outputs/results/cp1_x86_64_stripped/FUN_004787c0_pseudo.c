
undefined4 FUN_004787c0(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long in_FS_OFFSET;
  int local_44;
  long local_40;
  
  lVar13 = *(long *)(param_1 + 0xf8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar8 = FUN_00485290(*(undefined8 *)(param_1 + 8));
  lVar9 = thunk_FUN_0041cdd0(param_2,"use_derivation_function");
  if ((lVar9 == 0) || (iVar5 = thunk_FUN_0041cf60(lVar9,&local_44), iVar5 == 0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
    *(uint *)(lVar13 + 0x30) = (uint)(local_44 != 0);
  }
  lVar9 = thunk_FUN_0041cdd0(param_2,"properties");
  if (lVar9 == 0) {
LAB_00478874:
    lVar10 = thunk_FUN_0041cdd0(param_2,"cipher");
    if (lVar10 == 0) {
      if (bVar4) goto LAB_004789d9;
LAB_00478b20:
      uVar7 = FUN_005b3b70(param_1,param_2);
      goto LAB_00478847;
    }
    lVar1 = *(long *)(lVar10 + 0x10);
    if ((*(int *)(lVar10 + 8) == 4) && (2 < *(ulong *)(lVar10 + 0x18))) {
      iVar5 = FUN_0041c9c0("CTR",lVar1 + -3 + *(ulong *)(lVar10 + 0x18));
      if (iVar5 != 0) {
        FUN_0051f420();
        FUN_0051f540("../providers/implementations/rands/drbg_ctr.c",0x2b5,"drbg_ctr_set_ctx_params"
                    );
        FUN_0051f8f0(0x39,0xce,0);
        uVar7 = 0;
        goto LAB_00478847;
      }
      lVar11 = FUN_0041c400(lVar1,*(undefined8 *)(lVar10 + 0x18),
                            "../providers/implementations/rands/drbg_ctr.c",0x2b8);
      if (lVar11 == 0) {
        FUN_0051f420();
        FUN_0051f540("../providers/implementations/rands/drbg_ctr.c",0x2b9,"drbg_ctr_set_ctx_params"
                    );
        FUN_0051f8f0(0x39,0xc0100,0);
        uVar7 = 0;
        goto LAB_00478847;
      }
      *(undefined4 *)(lVar11 + -3 + *(long *)(lVar10 + 0x18)) = 0x424345;
      FUN_00537a40(*(undefined8 *)(lVar13 + 0x18));
      FUN_00537a40(*(undefined8 *)(lVar13 + 0x20));
      uVar12 = FUN_00537960(uVar8,lVar1,lVar9);
      *(undefined8 *)(lVar13 + 0x20) = uVar12;
      uVar8 = FUN_00537960(uVar8,lVar11,lVar9);
      *(undefined8 *)(lVar13 + 0x18) = uVar8;
      FUN_0041ad60(lVar11,"../providers/implementations/rands/drbg_ctr.c",0x2c1);
      if ((*(long *)(lVar13 + 0x20) == 0) || (*(long *)(lVar13 + 0x18) == 0)) {
        FUN_0051f420();
        FUN_0051f540("../providers/implementations/rands/drbg_ctr.c",0x2c3,"drbg_ctr_set_ctx_params"
                    );
        FUN_0051f8f0(0x39,0xcf,0);
        uVar7 = 0;
        goto LAB_00478847;
      }
LAB_004789d9:
      plVar2 = *(long **)(param_1 + 0xf8);
      if (plVar2[4] == 0) {
        FUN_0051f420();
        FUN_0051f540("../providers/implementations/rands/drbg_ctr.c",0x214,"drbg_ctr_init");
        FUN_0051f8f0(0x39,0x9b,0);
        uVar7 = 0;
        goto LAB_00478847;
      }
      iVar5 = FUN_0040a170();
      plVar2[5] = (long)iVar5;
      if (*plVar2 == 0) {
        lVar13 = FUN_00535890();
        *plVar2 = lVar13;
        if (plVar2[1] == 0) goto LAB_00478c10;
        if (lVar13 != 0) goto LAB_00478a14;
LAB_00478c2a:
        FUN_0051f420(lVar13);
        uVar8 = 0x21d;
LAB_00478c3b:
        FUN_0051f540("../providers/implementations/rands/drbg_ctr.c",uVar8,"drbg_ctr_init");
        FUN_0051f8f0(0x39,0xc0100,0);
      }
      else {
        if (plVar2[1] == 0) {
LAB_00478c10:
          lVar9 = FUN_00535890();
          lVar13 = *plVar2;
          plVar2[1] = lVar9;
          if ((lVar13 == 0) || (lVar9 == 0)) goto LAB_00478c2a;
        }
        else {
          lVar13 = *plVar2;
        }
LAB_00478a14:
        iVar6 = FUN_00538a80(lVar13,plVar2[3],0,0,0,1);
        if ((iVar6 != 0) && (iVar6 = FUN_00538a80(plVar2[1],plVar2[4],0,0,0,1), iVar6 != 0)) {
          lVar13 = plVar2[6];
          *(int *)(param_1 + 0x80) = iVar5 << 3;
          *(long *)(param_1 + 0xe8) = (long)iVar5 + 0x10;
          if ((int)lVar13 != 0) {
            lVar13 = plVar2[2];
            if (lVar13 == 0) {
              lVar13 = FUN_00535890();
              plVar2[2] = lVar13;
              if (lVar13 == 0) {
                FUN_0051f420(0);
                uVar8 = 0x238;
                goto LAB_00478c3b;
              }
            }
            iVar5 = FUN_00538a80(lVar13,plVar2[3],0,&DAT_007e5460,0,1);
            if (iVar5 == 0) {
              FUN_0051f420();
              FUN_0051f540("../providers/implementations/rands/drbg_ctr.c",0x23e,"drbg_ctr_init");
              FUN_0051f8f0(0x39,0xcd,0);
              goto LAB_00478b68;
            }
          }
          *(undefined8 *)(param_1 + 0x88) = 0x10000;
          uVar3 = *(ulong *)(*(long *)(param_1 + 0xf8) + 0x28);
          if (*(int *)(*(long *)(param_1 + 0xf8) + 0x30) == 0) {
            uVar8 = 0x7fffffff;
            if (uVar3 != 0) {
              uVar8 = *(undefined8 *)(param_1 + 0xe8);
            }
            *(undefined8 *)(param_1 + 0x90) = uVar8;
            *(undefined8 *)(param_1 + 0x98) = uVar8;
            *(undefined8 *)(param_1 + 0xa0) = 0;
            *(undefined8 *)(param_1 + 0xa8) = 0;
            *(undefined8 *)(param_1 + 0xb0) = uVar8;
            *(undefined8 *)(param_1 + 0xb8) = uVar8;
          }
          else {
            *(undefined8 *)(param_1 + 0x90) = 0;
            *(undefined8 *)(param_1 + 0x98) = 0x7fffffff;
            *(undefined8 *)(param_1 + 0xa0) = 0;
            *(undefined8 *)(param_1 + 0xa8) = 0x7fffffff;
            *(undefined8 *)(param_1 + 0xb0) = 0x7fffffff;
            *(undefined8 *)(param_1 + 0xb8) = 0x7fffffff;
            if (uVar3 != 0) {
              *(ulong *)(param_1 + 0x90) = uVar3;
              *(ulong *)(param_1 + 0xa0) = uVar3 >> 1;
            }
          }
          goto LAB_00478b20;
        }
        FUN_0051f420();
        FUN_0051f540("../providers/implementations/rands/drbg_ctr.c",0x225,"drbg_ctr_init");
        FUN_0051f8f0(0x39,0xd0,0);
      }
LAB_00478b68:
      FUN_00537b70(*plVar2);
      FUN_00537b70(plVar2[1]);
      plVar2[1] = 0;
      *plVar2 = 0;
    }
  }
  else if (*(int *)(lVar9 + 8) == 4) {
    lVar9 = *(long *)(lVar9 + 0x10);
    goto LAB_00478874;
  }
  uVar7 = 0;
LAB_00478847:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar7;
}

