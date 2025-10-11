
undefined8 __nss_parse_line_result(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  
  if (2 < param_3 + 1U) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("parse_line_result >= -1 && parse_line_result <= 1","nss_parse_line_result.c",0x1b
                  ,"__nss_parse_line_result");
  }
  if (param_3 != 0) {
    if (param_3 == 1) {
      return 0;
    }
    uVar1 = __nss_readline_seek();
    return uVar1;
  }
  *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x16;
  return 0x16;
}

