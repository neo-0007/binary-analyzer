
void __gconv_get_builtin_trans(char *param_1,undefined1 (*param_2) [16])

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  long lVar8;
  
  iVar7 = strcmp(param_1,"=INTERNAL->ucs4");
  if (iVar7 == 0) {
    lVar8 = 0;
  }
  else {
    iVar7 = strcmp(param_1,"=ucs4->INTERNAL");
    if (iVar7 == 0) {
      lVar8 = 1;
    }
    else {
      iVar7 = strcmp(param_1,"=INTERNAL->ucs4le");
      if (iVar7 == 0) {
        lVar8 = 2;
      }
      else {
        iVar7 = strcmp(param_1,"=ucs4le->INTERNAL");
        if (iVar7 == 0) {
          lVar8 = 3;
        }
        else {
          iVar7 = strcmp(param_1,"=INTERNAL->utf8");
          if (iVar7 == 0) {
            lVar8 = 4;
          }
          else {
            iVar7 = strcmp(param_1,"=utf8->INTERNAL");
            if (iVar7 == 0) {
              lVar8 = 5;
            }
            else {
              iVar7 = strcmp(param_1,"=ucs2->INTERNAL");
              if (iVar7 == 0) {
                lVar8 = 6;
              }
              else {
                iVar7 = strcmp(param_1,"=INTERNAL->ucs2");
                if (iVar7 == 0) {
                  lVar8 = 7;
                }
                else {
                  iVar7 = strcmp(param_1,"=ascii->INTERNAL");
                  if (iVar7 == 0) {
                    lVar8 = 8;
                  }
                  else {
                    iVar7 = strcmp(param_1,"=INTERNAL->ascii");
                    if (iVar7 == 0) {
                      lVar8 = 9;
                    }
                    else {
                      iVar7 = strcmp(param_1,"=ucs2reverse->INTERNAL");
                      if (iVar7 == 0) {
                        lVar8 = 10;
                      }
                      else {
                        iVar7 = strcmp(param_1,"=INTERNAL->ucs2reverse");
                        if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
                          __assert_fail("cnt < sizeof (map) / sizeof (map[0])","gconv_builtin.c",
                                        0x45,"__gconv_get_builtin_trans");
                        }
                        lVar8 = 0xb;
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
  lVar8 = lVar8 * 0x20;
  uVar5 = *(undefined8 *)(map + lVar8 + 8);
  uVar6 = *(undefined8 *)(map + lVar8 + 0x10);
  *(undefined1 (*) [16])(param_2[3] + 8) = (undefined1  [16])0x0;
  *param_2 = (undefined1  [16])0x0;
  cVar1 = map[lVar8 + 0x18];
  cVar2 = map[lVar8 + 0x19];
  *(undefined4 *)(param_2[5] + 8) = 0;
  *(undefined8 *)(param_2[2] + 8) = uVar5;
  *(undefined8 *)param_2[3] = uVar6;
  cVar3 = map[lVar8 + 0x1a];
  cVar4 = map[lVar8 + 0x1b];
  *(ulong *)(param_2[4] + 8) = CONCAT44((int)cVar2,(int)cVar1);
  *(ulong *)param_2[5] = CONCAT44((int)cVar4,(int)cVar3);
  return;
}

