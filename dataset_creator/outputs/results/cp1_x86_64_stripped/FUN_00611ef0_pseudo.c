
undefined8 FUN_00611ef0(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  long in_FS_OFFSET;
  undefined8 local_260;
  undefined1 local_258 [256];
  undefined1 local_158 [312];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_260 = param_3;
  switch(*param_2) {
  case 0:
    iVar1 = FUN_00423da0(**(undefined8 **)(param_2 + 2));
    if (iVar1 == 0x4b9) {
      if (**(int **)(*(long *)(param_2 + 2) + 8) == 0xc) {
        piVar3 = *(int **)(*(int **)(*(long *)(param_2 + 2) + 8) + 2);
        iVar1 = thunk_FUN_0059be40("othername: XmppAddr:",*(undefined8 *)(piVar3 + 2),(long)*piVar3,
                                   &local_260);
        param_3 = local_260;
        if (iVar1 == 0) {
          param_3 = 0;
        }
        break;
      }
    }
    else if (iVar1 < 0x4ba) {
      if (iVar1 == 0x289) {
        if (**(int **)(*(long *)(param_2 + 2) + 8) == 0xc) {
          piVar3 = *(int **)(*(int **)(*(long *)(param_2 + 2) + 8) + 2);
          iVar1 = thunk_FUN_0059be40("othername: UPN:",*(undefined8 *)(piVar3 + 2),(long)*piVar3,
                                     &local_260);
          param_3 = local_260;
          if (iVar1 == 0) {
            param_3 = 0;
          }
          break;
        }
      }
      else {
        if (iVar1 != 0x4b8) {
LAB_00612220:
          iVar1 = FUN_00423e90(local_258,0x100,**(undefined8 **)(param_2 + 2),0);
          if (iVar1 < 1) {
            FUN_0041c470(local_158,"othername:",300);
          }
          else {
            FUN_004aeb30(local_158,300,"othername: %s:",local_258);
          }
          piVar3 = *(int **)(*(long *)(param_2 + 2) + 8);
          iVar1 = *piVar3;
          if (iVar1 == 0x16) {
            iVar1 = thunk_FUN_0059be40(local_158,*(undefined8 *)(*(int **)(piVar3 + 2) + 2),
                                       (long)**(int **)(piVar3 + 2),&local_260);
            param_3 = local_260;
            if (iVar1 != 0) break;
            piVar3 = *(int **)(*(long *)(param_2 + 2) + 8);
            iVar1 = *piVar3;
          }
          if (((iVar1 != 0xc) ||
              (iVar1 = thunk_FUN_0059be40(local_158,*(undefined8 *)(*(int **)(piVar3 + 2) + 2),
                                          (long)**(int **)(piVar3 + 2),&local_260),
              param_3 = local_260, iVar1 == 0)) &&
             (iVar1 = FUN_0059ce00(local_158,"<unsupported>",&local_260), param_3 = local_260,
             iVar1 == 0)) {
            param_3 = 0;
          }
          break;
        }
        if (**(int **)(*(long *)(param_2 + 2) + 8) == 0xc) {
          piVar3 = *(int **)(*(int **)(*(long *)(param_2 + 2) + 8) + 2);
          iVar1 = thunk_FUN_0059be40("othername: SmtpUTF8Mailbox:",*(undefined8 *)(piVar3 + 2),
                                     (long)*piVar3,&local_260);
          param_3 = local_260;
          if (iVar1 == 0) {
            param_3 = 0;
          }
          break;
        }
      }
    }
    else if (iVar1 == 0x4ba) {
      if (**(int **)(*(long *)(param_2 + 2) + 8) == 0x16) {
        piVar3 = *(int **)(*(int **)(*(long *)(param_2 + 2) + 8) + 2);
        iVar1 = thunk_FUN_0059be40("othername: SRVName:",*(undefined8 *)(piVar3 + 2),(long)*piVar3,
                                   &local_260);
        param_3 = local_260;
        if (iVar1 == 0) {
          param_3 = 0;
        }
        break;
      }
    }
    else {
      if (iVar1 != 0x4bb) goto LAB_00612220;
      if (**(int **)(*(long *)(param_2 + 2) + 8) == 0xc) {
        piVar3 = *(int **)(*(int **)(*(long *)(param_2 + 2) + 8) + 2);
        iVar1 = thunk_FUN_0059be40("othername: NAIRealm:",*(undefined8 *)(piVar3 + 2),(long)*piVar3,
                                   &local_260);
        param_3 = local_260;
        if (iVar1 == 0) {
          param_3 = 0;
        }
        break;
      }
    }
    goto LAB_00611fde;
  case 1:
    iVar1 = thunk_FUN_0059be40("email",*(undefined8 *)(*(int **)(param_2 + 2) + 2),
                               (long)**(int **)(param_2 + 2),&local_260);
    param_3 = local_260;
    if (iVar1 == 0) {
      param_3 = 0;
    }
    break;
  case 2:
    iVar1 = thunk_FUN_0059be40(&PTR_LAB_0080d55d,*(undefined8 *)(*(int **)(param_2 + 2) + 2),
                               (long)**(int **)(param_2 + 2),&local_260);
    param_3 = local_260;
    if (iVar1 == 0) {
      param_3 = 0;
    }
    break;
  case 3:
    iVar1 = FUN_0059ce00("X400Name","<unsupported>",&local_260);
    param_3 = local_260;
    if (iVar1 == 0) {
      param_3 = 0;
    }
    break;
  case 4:
    lVar2 = FUN_005a0eb0(*(undefined8 *)(param_2 + 2),local_258,0x100);
    if (lVar2 != 0) {
      iVar1 = FUN_0059ce00("DirName",local_258,&local_260);
      param_3 = local_260;
      if (iVar1 == 0) {
        param_3 = 0;
      }
      break;
    }
    goto LAB_00611fde;
  case 5:
    iVar1 = FUN_0059ce00("EdiPartyName","<unsupported>",&local_260);
    param_3 = local_260;
    if (iVar1 == 0) {
      param_3 = 0;
    }
    break;
  case 6:
    iVar1 = thunk_FUN_0059be40(&DAT_0081bcc6,*(undefined8 *)(*(int **)(param_2 + 2) + 2),
                               (long)**(int **)(param_2 + 2),&local_260);
    param_3 = local_260;
    if (iVar1 == 0) {
      param_3 = 0;
    }
    break;
  case 7:
    lVar2 = FUN_0059ddb0(*(undefined8 *)(*(undefined4 **)(param_2 + 2) + 2),
                         **(undefined4 **)(param_2 + 2));
    if ((lVar2 == 0) || (iVar1 = FUN_0059ce00("IP Address",lVar2,&local_260), iVar1 == 0)) {
      local_260 = 0;
    }
    FUN_0041ad60(lVar2,"../crypto/x509/v3_san.c",0xc3);
    param_3 = local_260;
    break;
  case 8:
    FUN_004a0440(local_258,0x100,*(undefined8 *)(param_2 + 2));
    iVar1 = FUN_0059ce00("Registered ID",local_258,&local_260);
    param_3 = local_260;
    if (iVar1 != 0) break;
LAB_00611fde:
    param_3 = 0;
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return param_3;
}

