
bool WPACKET_is_null_buf(long *param_1)

{
  if (*param_1 != 0) {
    return false;
  }
  return param_1[1] == 0;
}

