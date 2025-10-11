
long FUN_007b14d0(long *param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  *param_1 = param_2;
  lVar14 = 1;
  *(byte *)(param_2 + 0x31c) = *(byte *)(param_2 + 0x31c) & 0x9f | 0x20;
  lVar2 = *(long *)(param_2 + 0x3d0);
  if (lVar2 == 0) {
    return 1;
  }
  plVar9 = param_1 + 1;
  lVar11 = *(long *)(lVar2 + 8);
  if (lVar11 != 0) {
    do {
      if ((*(byte *)(lVar11 + 0x31c) & 0x60) == 0) {
        *plVar9 = lVar11;
        plVar9 = plVar9 + 1;
        *(byte *)(lVar11 + 0x31c) = *(byte *)(lVar11 + 0x31c) & 0x9f | 0x20;
        lVar14 = *(long *)(lVar11 + 0x3d0);
        if ((lVar14 != 0) && (lVar11 = *(long *)(lVar14 + 8), lVar11 != 0)) {
          bVar1 = *(byte *)(lVar11 + 0x31c);
          do {
            if ((bVar1 & 0x60) == 0) {
              *plVar9 = lVar11;
              plVar9 = plVar9 + 1;
              *(byte *)(lVar11 + 0x31c) = *(byte *)(lVar11 + 0x31c) & 0x9f | 0x20;
              lVar11 = *(long *)(lVar11 + 0x3d0);
              if ((lVar11 != 0) && (lVar3 = *(long *)(lVar11 + 8), lVar3 != 0)) {
                bVar1 = *(byte *)(lVar3 + 0x31c);
                do {
                  if ((bVar1 & 0x60) == 0) {
                    *plVar9 = lVar3;
                    plVar9 = plVar9 + 1;
                    *(byte *)(lVar3 + 0x31c) = *(byte *)(lVar3 + 0x31c) & 0x9f | 0x20;
                    lVar3 = *(long *)(lVar3 + 0x3d0);
                    if ((lVar3 != 0) && (lVar4 = *(long *)(lVar3 + 8), lVar4 != 0)) {
                      bVar1 = *(byte *)(lVar4 + 0x31c);
                      do {
                        if ((bVar1 & 0x60) == 0) {
                          *plVar9 = lVar4;
                          plVar9 = plVar9 + 1;
                          *(byte *)(lVar4 + 0x31c) = *(byte *)(lVar4 + 0x31c) & 0x9f | 0x20;
                          lVar4 = *(long *)(lVar4 + 0x3d0);
                          if ((lVar4 != 0) && (lVar5 = *(long *)(lVar4 + 8), lVar5 != 0)) {
                            bVar1 = *(byte *)(lVar5 + 0x31c);
                            do {
                              if ((bVar1 & 0x60) == 0) {
                                *plVar9 = lVar5;
                                plVar9 = plVar9 + 1;
                                *(byte *)(lVar5 + 0x31c) = *(byte *)(lVar5 + 0x31c) & 0x9f | 0x20;
                                lVar5 = *(long *)(lVar5 + 0x3d0);
                                if ((lVar5 != 0) && (lVar6 = *(long *)(lVar5 + 8), lVar6 != 0)) {
                                  bVar1 = *(byte *)(lVar6 + 0x31c);
                                  do {
                                    if ((bVar1 & 0x60) == 0) {
                                      *plVar9 = lVar6;
                                      plVar9 = plVar9 + 1;
                                      *(byte *)(lVar6 + 0x31c) =
                                           *(byte *)(lVar6 + 0x31c) & 0x9f | 0x20;
                                      lVar6 = *(long *)(lVar6 + 0x3d0);
                                      if ((lVar6 != 0) && (lVar7 = *(long *)(lVar6 + 8), lVar7 != 0)
                                         ) {
                                        bVar1 = *(byte *)(lVar7 + 0x31c);
                                        do {
                                          if ((bVar1 & 0x60) == 0) {
                                            *plVar9 = lVar7;
                                            plVar9 = plVar9 + 1;
                                            *(byte *)(lVar7 + 0x31c) =
                                                 *(byte *)(lVar7 + 0x31c) & 0x9f | 0x20;
                                            lVar7 = *(long *)(lVar7 + 0x3d0);
                                            if ((lVar7 != 0) &&
                                               (lVar13 = *(long *)(lVar7 + 8), lVar13 != 0)) {
                                              bVar1 = *(byte *)(lVar13 + 0x31c);
                                              do {
                                                if ((bVar1 & 0x60) == 0) {
                                                  *plVar9 = lVar13;
                                                  plVar9 = plVar9 + 1;
                                                  lVar12 = *(long *)(lVar13 + 0x3d0);
                                                  *(byte *)(lVar13 + 0x31c) =
                                                       *(byte *)(lVar13 + 0x31c) & 0x9f | 0x20;
                                                  if (lVar12 != 0) {
                                                    lVar13 = *(long *)(lVar12 + 8);
                                                    while (lVar8 = lVar12, lVar13 != 0) {
                                                      while (lVar12 = lVar8 + 8,
                                                            (*(byte *)(lVar13 + 0x31c) & 0x60) == 0)
                                                      {
                                                        lVar10 = FUN_007b14d0();
                                                        lVar13 = *(long *)(lVar8 + 0x10);
                                                        plVar9 = plVar9 + lVar10;
                                                        lVar8 = lVar12;
                                                        if (lVar13 == 0) goto LAB_007b17a0;
                                                      }
                                                      lVar13 = *(long *)(lVar8 + 0x10);
                                                    }
                                                  }
                                                }
LAB_007b17a0:
                                                lVar13 = *(long *)(lVar7 + 0x10);
                                                if (lVar13 == 0) break;
                                                bVar1 = *(byte *)(lVar13 + 0x31c);
                                                lVar7 = lVar7 + 8;
                                              } while( true );
                                            }
                                          }
                                          lVar7 = *(long *)(lVar6 + 0x10);
                                          if (lVar7 == 0) break;
                                          bVar1 = *(byte *)(lVar7 + 0x31c);
                                          lVar6 = lVar6 + 8;
                                        } while( true );
                                      }
                                    }
                                    lVar6 = *(long *)(lVar5 + 0x10);
                                    if (lVar6 == 0) break;
                                    bVar1 = *(byte *)(lVar6 + 0x31c);
                                    lVar5 = lVar5 + 8;
                                  } while( true );
                                }
                              }
                              lVar5 = *(long *)(lVar4 + 0x10);
                              if (lVar5 == 0) break;
                              bVar1 = *(byte *)(lVar5 + 0x31c);
                              lVar4 = lVar4 + 8;
                            } while( true );
                          }
                        }
                        lVar4 = *(long *)(lVar3 + 0x10);
                        if (lVar4 == 0) break;
                        bVar1 = *(byte *)(lVar4 + 0x31c);
                        lVar3 = lVar3 + 8;
                      } while( true );
                    }
                  }
                  lVar3 = *(long *)(lVar11 + 0x10);
                  if (lVar3 == 0) break;
                  bVar1 = *(byte *)(lVar3 + 0x31c);
                  lVar11 = lVar11 + 8;
                } while( true );
              }
            }
            lVar11 = *(long *)(lVar14 + 0x10);
            if (lVar11 == 0) break;
            bVar1 = *(byte *)(lVar11 + 0x31c);
            lVar14 = lVar14 + 8;
          } while( true );
        }
      }
      lVar11 = *(long *)(lVar2 + 0x10);
      lVar2 = lVar2 + 8;
    } while (lVar11 != 0);
    lVar14 = (long)plVar9 - (long)param_1 >> 3;
  }
  return lVar14;
}

