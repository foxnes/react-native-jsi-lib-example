import * as React from 'react';

import { StyleSheet, View, Text } from 'react-native';
import { testFcn } from 'react-native-fast-jsi-lib';

export default function App() {

  React.useEffect(() => {
    testFcn();
  }, []);

  return (
    <View style={styles.container}>
      <Text></Text>
    </View>
  );
}

const styles = StyleSheet.create({
  container: {
    flex: 1,
    alignItems: 'center',
    justifyContent: 'center',
  },
  box: {
    width: 60,
    height: 60,
    marginVertical: 20,
  },
});
