
void FUN_006d5340(undefined8 param_1,undefined1 (*param_2) [16])

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  undefined *puVar5;
  undefined8 uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  
  iVar7 = thunk_FUN_00712780(param_1,"=INTERNAL->ucs4");
  if (iVar7 == 0) {
    lVar9 = 0;
  }
  else {
    iVar7 = thunk_FUN_00712780(param_1,"=ucs4->INTERNAL");
    if (iVar7 == 0) {
      lVar9 = 1;
    }
    else {
      iVar7 = thunk_FUN_00712780(param_1,"=INTERNAL->ucs4le");
      if (iVar7 == 0) {
        lVar9 = 2;
      }
      else {
        iVar7 = thunk_FUN_00712780(param_1,"=ucs4le->INTERNAL");
        if (iVar7 == 0) {
          lVar9 = 3;
        }
        else {
          iVar7 = thunk_FUN_00712780(param_1,"=INTERNAL->utf8");
          if (iVar7 == 0) {
            lVar9 = 4;
          }
          else {
            iVar7 = thunk_FUN_00712780(param_1,"=utf8->INTERNAL");
            if (iVar7 == 0) {
              lVar9 = 5;
            }
            else {
              iVar7 = thunk_FUN_00712780(param_1,"=ucs2->INTERNAL");
              if (iVar7 == 0) {
                lVar9 = 6;
              }
              else {
                iVar7 = thunk_FUN_00712780(param_1,"=INTERNAL->ucs2");
                if (iVar7 == 0) {
                  lVar9 = 7;
                }
                else {
                  iVar7 = thunk_FUN_00712780(param_1,"=ascii->INTERNAL");
                  if (iVar7 == 0) {
                    lVar9 = 8;
                  }
                  else {
                    iVar7 = thunk_FUN_00712780(param_1,"=INTERNAL->ascii");
                    if (iVar7 == 0) {
                      lVar9 = 9;
                    }
                    else {
                      iVar7 = thunk_FUN_00712780(param_1,"=ucs2reverse->INTERNAL");
                      if (iVar7 == 0) {
                        lVar9 = 10;
                      }
                      else {
                        iVar7 = thunk_FUN_00712780(param_1,"=INTERNAL->ucs2reverse");
                        if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_006e2220("cnt < sizeof (map) / sizeof (map[0])","gconv_builtin.c",0x45
                                       ,"__gconv_get_builtin_trans");
                        }
                        lVar9 = 0xb;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  lVar8 = lVar9 * 0x20;
  puVar5 = (&PTR_FUN_00939948)[lVar9 * 4];
  uVar6 = *(undefined8 *)(&UNK_00939950 + lVar8);
  *(undefined1 (*) [16])(param_2[3] + 8) = (undefined1  [16])0x0;
  *param_2 = (undefined1  [16])0x0;
  cVar1 = (&DAT_00939958)[lVar8];
  cVar2 = (&DAT_00939959)[lVar8];
  *(undefined4 *)(param_2[5] + 8) = 0;
  *(undefined **)(param_2[2] + 8) = puVar5;
  *(undefined8 *)param_2[3] = uVar6;
  cVar3 = (&DAT_0093995a)[lVar8];
  cVar4 = (&DAT_0093995b)[lVar8];
  *(ulong *)(param_2[4] + 8) = CONCAT44((int)cVar2,(int)cVar1);
  *(ulong *)param_2[5] = CONCAT44((int)cVar4,(int)cVar3);
  return;
}

