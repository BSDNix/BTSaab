#include <mcp2515.h>
#include <BluetoothA2DPSink.h>

void audio_state_callback(esp_a2d_audio_state_t state, void *data);
void avrc_metadata_callback(uint8_t data1, const uint8_t *data2);
void CAN_Control_Task(void *params);
void checkErr(MCP2515 mcp2515);
void connection_state_callback(esp_a2d_connection_state_t state, void *p_param);
void frameHandler(can_frame *f);
void framePrint(can_frame *f);
void requestAccess();
void rotateStringLeft(char *str, int n);
void setRadioText(char *text);
void setupAudio();
void setupCAN();
void SIDControl(void *params);
void utf8_to_sid(char *str);