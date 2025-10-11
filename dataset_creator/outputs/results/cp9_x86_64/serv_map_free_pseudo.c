
void serv_map_free(void)

{
  undefined8 __ptr;
  
  __ptr = __serv_map_handle._8_8_;
  if (__serv_map_handle._8_8_ != -1) {
    __serv_map_handle._8_8_ = 0xffffffffffffffff;
    free((void *)__ptr);
    return;
  }
  return;
}

