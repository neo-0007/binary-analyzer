
undefined8 check_set_resp_len(long param_1,ulong param_2)

{
  if ((*(ulong *)(param_1 + 0x98) < param_2) && (*(ulong *)(param_1 + 0x98) != 0)) {
    ERR_new();
    ERR_set_debug("../crypto/http/http_client.c",0x1c9,"check_set_resp_len");
    ERR_set_error(0x3d,0x75,"length=%zu, max=%zu",param_2,*(undefined8 *)(param_1 + 0x98));
  }
  if ((*(ulong *)(param_1 + 0x90) != param_2) && (*(ulong *)(param_1 + 0x90) != 0)) {
    ERR_new();
    ERR_set_debug("../crypto/http/http_client.c",0x1cc,"check_set_resp_len");
    ERR_set_error(0x3d,0x78,"ASN.1 length=%zu, Content-Length=%zu",param_2,
                  *(undefined8 *)(param_1 + 0x90));
  }
  *(ulong *)(param_1 + 0x90) = param_2;
  return 1;
}

