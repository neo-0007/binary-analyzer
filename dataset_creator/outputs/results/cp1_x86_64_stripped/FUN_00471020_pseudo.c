
bool FUN_00471020(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  bool bVar6;
  
  lVar4 = thunk_FUN_0041cdd0(param_2,"use-cofactor-flag");
  if ((lVar4 == 0) || (iVar3 = thunk_FUN_0041cf60(lVar4,param_1 + 0x7c), iVar3 != 0)) {
    lVar4 = thunk_FUN_0041cdd0(param_2,"group");
    if (lVar4 == 0) {
LAB_004710c3:
      lVar4 = thunk_FUN_0041cdd0(param_2,"field-type");
      if (lVar4 == 0) {
LAB_00471117:
        lVar4 = thunk_FUN_0041cdd0(param_2,"encoding");
        if (lVar4 == 0) {
LAB_0047116f:
          lVar4 = thunk_FUN_0041cdd0(param_2,"point-format");
          if (lVar4 == 0) {
LAB_004711c7:
            lVar4 = thunk_FUN_0041cdd0(param_2,"group-check");
            if (lVar4 == 0) {
LAB_0047121f:
              lVar4 = thunk_FUN_0041cdd0(param_2,"p");
              if (lVar4 != 0) {
                if (*(long *)(param_1 + 0x30) == 0) {
                  lVar5 = FUN_004b7690(lVar4);
                  *(long *)(param_1 + 0x30) = lVar5;
                  if (lVar5 == 0) goto LAB_00471075;
                }
                iVar3 = FUN_0041dc20(lVar4,param_1 + 0x30);
                if (iVar3 == 0) goto LAB_00471075;
              }
              lVar4 = thunk_FUN_0041cdd0(param_2,"a");
              if (lVar4 != 0) {
                if (*(long *)(param_1 + 0x38) == 0) {
                  lVar5 = FUN_004b7690();
                  *(long *)(param_1 + 0x38) = lVar5;
                  if (lVar5 == 0) goto LAB_00471075;
                }
                iVar3 = FUN_0041dc20(lVar4,param_1 + 0x38);
                if (iVar3 == 0) goto LAB_00471075;
              }
              lVar4 = thunk_FUN_0041cdd0(param_2,"b");
              if (lVar4 != 0) {
                if (*(long *)(param_1 + 0x40) == 0) {
                  lVar5 = FUN_004b7690();
                  *(long *)(param_1 + 0x40) = lVar5;
                  if (lVar5 == 0) goto LAB_00471075;
                }
                iVar3 = FUN_0041dc20(lVar4,param_1 + 0x40);
                if (iVar3 == 0) goto LAB_00471075;
              }
              lVar4 = thunk_FUN_0041cdd0(param_2,"order");
              if (lVar4 != 0) {
                if (*(long *)(param_1 + 0x48) == 0) {
                  lVar5 = FUN_004b7690();
                  *(long *)(param_1 + 0x48) = lVar5;
                  if (lVar5 == 0) goto LAB_00471075;
                }
                iVar3 = FUN_0041dc20(lVar4,param_1 + 0x48);
                if (iVar3 == 0) goto LAB_00471075;
              }
              lVar4 = thunk_FUN_0041cdd0(param_2,"cofactor");
              if (lVar4 != 0) {
                if (*(long *)(param_1 + 0x50) == 0) {
                  lVar5 = FUN_004b7690();
                  *(long *)(param_1 + 0x50) = lVar5;
                  if (lVar5 == 0) goto LAB_00471075;
                }
                iVar3 = FUN_0041dc20(lVar4,param_1 + 0x50);
                if (iVar3 == 0) goto LAB_00471075;
              }
              lVar4 = thunk_FUN_0041cdd0(param_2,"seed");
              if (lVar4 == 0) {
LAB_0047138b:
                bVar6 = true;
                lVar4 = thunk_FUN_0041cdd0(param_2,"generator");
                if (lVar4 == 0) goto LAB_00471078;
                if (*(int *)(lVar4 + 8) == 5) {
                  FUN_0041ad60(*(undefined8 *)(param_1 + 0x58),
                               "../providers/implementations/keymgmt/ec_kmgmt.c",0x451);
                  uVar1 = *(undefined8 *)(lVar4 + 0x18);
                  uVar2 = *(undefined8 *)(lVar4 + 0x10);
                  *(undefined8 *)(param_1 + 0x68) = uVar1;
                  lVar4 = FUN_0041c320(uVar2,uVar1,"../providers/implementations/keymgmt/ec_kmgmt.c"
                                       ,0x451);
                  bVar6 = lVar4 != 0;
                  *(long *)(param_1 + 0x58) = lVar4;
                  goto LAB_00471078;
                }
              }
              else if (*(int *)(lVar4 + 8) == 5) {
                FUN_0041ad60(*(undefined8 *)(param_1 + 0x60),
                             "../providers/implementations/keymgmt/ec_kmgmt.c",0x450);
                uVar1 = *(undefined8 *)(lVar4 + 0x18);
                uVar2 = *(undefined8 *)(lVar4 + 0x10);
                *(undefined8 *)(param_1 + 0x70) = uVar1;
                lVar4 = FUN_0041c320(uVar2,uVar1,"../providers/implementations/keymgmt/ec_kmgmt.c",
                                     0x450);
                *(long *)(param_1 + 0x60) = lVar4;
                if (lVar4 != 0) goto LAB_0047138b;
              }
            }
            else if (*(int *)(lVar4 + 8) == 4) {
              FUN_0041ad60(*(undefined8 *)(param_1 + 0x20),
                           "../providers/implementations/keymgmt/ec_kmgmt.c",0x448);
              lVar4 = FUN_0041c2c0(*(undefined8 *)(lVar4 + 0x10),
                                   "../providers/implementations/keymgmt/ec_kmgmt.c",0x448);
              *(long *)(param_1 + 0x20) = lVar4;
              if (lVar4 != 0) goto LAB_0047121f;
            }
          }
          else if (*(int *)(lVar4 + 8) == 4) {
            FUN_0041ad60(*(undefined8 *)(param_1 + 0x18),
                         "../providers/implementations/keymgmt/ec_kmgmt.c",0x447);
            lVar4 = FUN_0041c2c0(*(undefined8 *)(lVar4 + 0x10),
                                 "../providers/implementations/keymgmt/ec_kmgmt.c",0x447);
            *(long *)(param_1 + 0x18) = lVar4;
            if (lVar4 != 0) goto LAB_004711c7;
          }
        }
        else if (*(int *)(lVar4 + 8) == 4) {
          FUN_0041ad60(*(undefined8 *)(param_1 + 0x10),
                       "../providers/implementations/keymgmt/ec_kmgmt.c",0x446);
          lVar4 = FUN_0041c2c0(*(undefined8 *)(lVar4 + 0x10),
                               "../providers/implementations/keymgmt/ec_kmgmt.c",0x446);
          *(long *)(param_1 + 0x10) = lVar4;
          if (lVar4 != 0) goto LAB_0047116f;
        }
      }
      else if (*(int *)(lVar4 + 8) == 4) {
        FUN_0041ad60(*(undefined8 *)(param_1 + 0x28),
                     "../providers/implementations/keymgmt/ec_kmgmt.c",0x445);
        lVar4 = FUN_0041c2c0(*(undefined8 *)(lVar4 + 0x10),
                             "../providers/implementations/keymgmt/ec_kmgmt.c",0x445);
        *(long *)(param_1 + 0x28) = lVar4;
        if (lVar4 != 0) goto LAB_00471117;
      }
    }
    else if (*(int *)(lVar4 + 8) == 4) {
      FUN_0041ad60(*(undefined8 *)(param_1 + 8),"../providers/implementations/keymgmt/ec_kmgmt.c",
                   0x444);
      lVar4 = FUN_0041c2c0(*(undefined8 *)(lVar4 + 0x10),
                           "../providers/implementations/keymgmt/ec_kmgmt.c",0x444);
      *(long *)(param_1 + 8) = lVar4;
      if (lVar4 != 0) goto LAB_004710c3;
    }
  }
LAB_00471075:
  bVar6 = false;
LAB_00471078:
  FUN_004efd00(0);
  return bVar6;
}

