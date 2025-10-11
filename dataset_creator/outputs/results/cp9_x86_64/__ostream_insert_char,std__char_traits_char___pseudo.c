
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::ostream& std::__ostream_insert<char, std::char_traits<char> >(std::ostream&, char const*,
   long) */

ostream * std::__ostream_insert<char,std::char_traits<char>>
                    (ostream *param_1,char *param_2,long param_3)

{
  uint uVar1;
  long *plVar2;
  ctype<char> *pcVar3;
  char cVar4;
  ctype<char> cVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ios *piVar10;
  long in_FS_OFFSET;
  sentry local_58 [8];
  long *local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ostream::sentry::sentry(local_58,param_1);
  if (local_58[0] != (sentry)0x0) {
    lVar7 = *(long *)(*(long *)param_1 + -0x18);
    piVar10 = (ios *)(param_1 + lVar7);
    lVar9 = *(long *)(piVar10 + 0x10);
    if (param_3 < lVar9) {
      uVar1 = *(uint *)(piVar10 + 0x18);
      if ((uVar1 & 0xb0) == 0x20) {
LAB_0068ad1a:
        iVar6 = *(int *)(piVar10 + 0x20);
      }
      else {
        lVar8 = lVar9 - param_3;
        if (piVar10[0xe1] == (ios)0x0) {
          pcVar3 = *(ctype<char> **)(piVar10 + 0xf0);
          if (pcVar3 == (ctype<char> *)0x0) {
                    /* WARNING: Subroutine does not return */
            __throw_bad_cast();
          }
          if (pcVar3[0x38] == (ctype<char>)0x0) {
                    /* try { // try from 0068af48 to 0068aff4 has its CatchHandler @ 0068aff5 */
            ctype<char>::_M_widen_init(pcVar3);
            cVar5 = (ctype<char>)0x20;
            if (*(code **)(*(long *)pcVar3 + 0x30) != ctype<char>::do_widen) {
              cVar5 = (ctype<char>)(**(code **)(*(long *)pcVar3 + 0x30))(pcVar3,0x20);
            }
          }
          else {
            cVar5 = pcVar3[0x59];
          }
          *(ctype<char> *)(piVar10 + 0xe0) = cVar5;
          lVar7 = *(long *)param_1;
          piVar10[0xe1] = (ios)0x1;
          lVar7 = *(long *)(lVar7 + -0x18);
        }
        else {
          cVar5 = *(ctype<char> *)(piVar10 + 0xe0);
        }
        do {
          plVar2 = *(long **)(param_1 + lVar7 + 0xe8);
          if ((ctype<char> *)plVar2[5] < (ctype<char> *)plVar2[6]) {
            *(ctype<char> *)plVar2[5] = cVar5;
            plVar2[5] = plVar2[5] + 1;
          }
          else {
                    /* try { // try from 0068acf1 to 0068ad0e has its CatchHandler @ 0068aff5 */
            iVar6 = (**(code **)(*plVar2 + 0x68))(plVar2,cVar5);
            if (iVar6 == -1) {
              ios::clear((ios *)(param_1 + *(long *)(*(long *)param_1 + -0x18)),
                         *(uint *)((ios *)(param_1 + *(long *)(*(long *)param_1 + -0x18)) + 0x20) |
                         1);
              piVar10 = (ios *)(param_1 + *(long *)(*(long *)param_1 + -0x18));
              goto LAB_0068ad1a;
            }
          }
          lVar7 = *(long *)(*(long *)param_1 + -0x18);
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
        piVar10 = (ios *)(param_1 + lVar7);
        iVar6 = *(int *)(piVar10 + 0x20);
      }
      if (iVar6 == 0) {
        lVar8 = (**(code **)(**(long **)(piVar10 + 0xe8) + 0x60))
                          (*(long **)(piVar10 + 0xe8),param_2,param_3);
        lVar7 = *(long *)param_1;
        if (param_3 != lVar8) {
          ios::clear((ios *)(param_1 + *(long *)(lVar7 + -0x18)),
                     *(uint *)((ios *)(param_1 + *(long *)(lVar7 + -0x18)) + 0x20) | 1);
          lVar7 = *(long *)param_1;
        }
        lVar7 = *(long *)(lVar7 + -0x18);
        piVar10 = (ios *)(param_1 + lVar7);
        if (((uVar1 & 0xb0) == 0x20) && (*(int *)(piVar10 + 0x20) == 0)) {
          lVar9 = lVar9 - param_3;
          if (piVar10[0xe1] == (ios)0x0) {
            pcVar3 = *(ctype<char> **)(piVar10 + 0xf0);
            if (pcVar3 == (ctype<char> *)0x0) {
                    /* WARNING: Subroutine does not return */
              __throw_bad_cast();
            }
            if (pcVar3[0x38] == (ctype<char>)0x0) {
              ctype<char>::_M_widen_init(pcVar3);
              cVar5 = (ctype<char>)0x20;
              if (*(code **)(*(long *)pcVar3 + 0x30) != ctype<char>::do_widen) {
                cVar5 = (ctype<char>)(**(code **)(*(long *)pcVar3 + 0x30))(pcVar3,0x20);
              }
            }
            else {
              cVar5 = pcVar3[0x59];
            }
            *(ctype<char> *)(piVar10 + 0xe0) = cVar5;
            lVar7 = *(long *)param_1;
            piVar10[0xe1] = (ios)0x1;
            lVar7 = *(long *)(lVar7 + -0x18);
          }
          else {
            cVar5 = *(ctype<char> *)(piVar10 + 0xe0);
          }
          do {
            plVar2 = *(long **)(param_1 + lVar7 + 0xe8);
            if ((ctype<char> *)plVar2[5] < (ctype<char> *)plVar2[6]) {
              *(ctype<char> *)plVar2[5] = cVar5;
              plVar2[5] = plVar2[5] + 1;
            }
            else {
              iVar6 = (**(code **)(*plVar2 + 0x68))(plVar2,cVar5);
              if (iVar6 == -1) {
                ios::clear((ios *)(param_1 + *(long *)(*(long *)param_1 + -0x18)),
                           *(uint *)((ios *)(param_1 + *(long *)(*(long *)param_1 + -0x18)) + 0x20)
                           | 1);
                goto LAB_0068add6;
              }
            }
            lVar7 = *(long *)(*(long *)param_1 + -0x18);
            lVar9 = lVar9 + -1;
          } while (lVar9 != 0);
          piVar10 = (ios *)(param_1 + lVar7);
        }
      }
    }
    else {
                    /* try { // try from 0068adb1 to 0068aece has its CatchHandler @ 0068aff5 */
      lVar9 = (**(code **)(**(long **)(piVar10 + 0xe8) + 0x60))
                        (*(long **)(piVar10 + 0xe8),param_2,param_3);
      piVar10 = (ios *)(param_1 + *(long *)(*(long *)param_1 + -0x18));
      if (param_3 != lVar9) {
        ios::clear(piVar10,*(uint *)(piVar10 + 0x20) | 1);
LAB_0068add6:
        *(undefined8 *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x10) = 0;
        goto LAB_0068ad2d;
      }
    }
    *(undefined8 *)(piVar10 + 0x10) = 0;
  }
LAB_0068ad2d:
  plVar2 = local_50;
  lVar9 = *(long *)(*local_50 + -0x18);
  if (((((*(byte *)((long)local_50 + lVar9 + 0x19) & 0x20) != 0) &&
       (cVar4 = uncaught_exception(), cVar4 == '\0')) &&
      (plVar2 = *(long **)((long)plVar2 + lVar9 + 0xe8), plVar2 != (long *)0x0)) &&
     (iVar6 = (**(code **)(*plVar2 + 0x30))(), iVar6 == -1)) {
    piVar10 = (ios *)((long)local_50 + *(long *)(*local_50 + -0x18));
    ios::clear(piVar10,*(uint *)(piVar10 + 0x20) | 1);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return param_1;
}

